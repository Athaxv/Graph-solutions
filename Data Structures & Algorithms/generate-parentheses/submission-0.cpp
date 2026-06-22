class Solution {
public:
    void solve(vector<string>& result, string res, int open, int close, int n){
        if (res.size() == n * 2){
            result.push_back(res);
        }
        if (open < n){
            solve(result, res + "(", open + 1, close, n);
        }
        if (close < open){
            solve(result, res + ")", open, close + 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(result, "", 0, 0, n);
        return result;
    }
};
