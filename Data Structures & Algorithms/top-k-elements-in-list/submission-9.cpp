class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        while(k){
            int set = 0;
            int count = 0;
            for(const auto& p : mpp){
               if (p.second > set){
                set = p.second;
                count = p.first;
               } 
            }
            mpp[count] = 0;
            temp.push_back(count);
            k--;
        }
        return temp;
    }
};
