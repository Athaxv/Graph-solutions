class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> temp;
        for(int i = 0; i < nums.size(); i++){
            temp[nums[i]]++;
        }
        int maxi = INT_MIN;
        int val = 0;
        for(const auto& it : temp){
            if (it.second > maxi){
                maxi = it.second;
                val = it.first;
            }
        }
        return val;
    }
};