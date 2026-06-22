class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int area = 0;
        while(i < j){
            
            if (heights[i] <= heights[j]){
                area = max(area, heights[i] * (j - i));
                i++;
            }
            else {
                area = max(area, heights[j] * (j - i));
                j--;
            }
        }
        return area;
    }
};
