class Solution {
public:
    int findDays(vector<int> weights, int mid){
        int count = 1;
        int load = 0;
        for(int j = 0; j < weights.size(); j++){
                if (load + weights[j] > mid){
                    count++;
                    load = weights[j];
                }
                else {
                    load += weights[j];
                }
            }
            return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int maxi = 0;
        for(int i = 0; i < weights.size(); i++){
            if (weights[i] > low){
                low = weights[i];
            }
            maxi += weights[i]; 
        }
        while(low <= maxi){
            int mid = (low + maxi) / 2;
            int getDays = findDays(weights, mid);
            if (getDays <= days){
                maxi = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};