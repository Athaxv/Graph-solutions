class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                temp.push_back(nums[i]);
            }
        }
        if (temp.empty()){
            return {};
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};