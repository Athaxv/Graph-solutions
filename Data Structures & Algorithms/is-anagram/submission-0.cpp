class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> temp;
        map<char, int> tamp;
        for(int i = 0; i < s.size(); i++){
            temp[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            tamp[t[i]]++;
        }
        if (temp == tamp){
            return true;
        }
        return false;
    }
};
