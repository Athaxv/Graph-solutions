class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if (prices[i] > mini && profit <= (prices[i] - mini)){
                profit = (prices[i] - mini);
            }
            else if (prices[i] < mini){
                mini = prices[i];
            }
        }
        return profit;
    }
};
