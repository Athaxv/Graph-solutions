class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];
        string temp = "";
        for(int i = 1; i < strs.size(); i++){
            int j = 1;
            while(str.substr(0, j) == strs[i].substr(0, j) && j <= strs[i].size()){
                temp = str.substr(0, j);
                j++;
            }
            str = temp;
        }
        return str;
    }
};