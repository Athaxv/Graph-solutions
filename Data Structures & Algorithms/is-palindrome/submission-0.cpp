class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        vector<char> temp;
        for(int i = 0; i < s.size(); i++){
            if (alphaNum(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        int j = temp.size() - 1;
        while(i <= j){
            if (temp[i] != temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
