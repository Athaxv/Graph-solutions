class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()){
            return 0;
        }
        vector<int> right;
        vector<int> left;
        int maxi = 0;
        for(int i = 0; i < height.size(); i++){
            left.push_back(maxi);
            if (height[i] > maxi){
                maxi = height[i];
            }
        }
        maxi = 0;
        for(int i = height.size() - 1; i >= 0; i--){
            right.push_back(maxi);
            if (height[i] > maxi){
                maxi = height[i];
            }
        }
        reverse(right.begin(), right.end());
        int ans = 0;
        for(int i = 0; i < height.size(); i++){
            ans += max(0, min(left[i], right[i]) - height[i]);
        }
        return ans;
    }
};
