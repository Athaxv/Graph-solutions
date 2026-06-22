class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        vector<vector<string>> temp;
        for(int i = 0; i < strs.size(); i++){
            string lap = strs[i];
            sort(lap.begin(), lap.end());
            if (mpp.find(lap) == mpp.end()){
                mpp[lap].push_back(strs[i]);
            }
            else if (mpp.find(lap) != mpp.end()){
                auto it = mpp.find(lap);
                mpp[lap].push_back(strs[i]);
            }
        }
        for(const auto& p : mpp){
            temp.push_back(p.second);
        }
        return temp;
    }
};
