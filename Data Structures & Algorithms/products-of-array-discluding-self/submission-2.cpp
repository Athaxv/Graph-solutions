class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        double ans = 1;
        double check_ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                ans *= 1;
                check_ans++;
            }
            else {
                ans *= nums[i];
            }
        }
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if (check_ans && nums[i] != 0){
                temp.push_back(0);
            }
            else if (check_ans > 1){
                temp.push_back(0);
            }
            else if (check_ans && nums[i] == 0){
                temp.push_back(ans);
            }
            else {
                temp.push_back(ans / nums[i]);
            }
        }
        return temp;
    }
};
