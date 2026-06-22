class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> temp;
        bool check = true;
        for(int i = 0; i < temperatures.size(); i++){
            check = true;
            for(int j = i + 1; j < temperatures.size(); j++){
                if (temperatures[j] > temperatures[i]){
                    int k = j - i;
                    temp.push_back(k);
                    check = false;
                    break;
                }
            }
            if (check){
                temp.push_back(0);
            }
        }
        return temp;
    }
};
