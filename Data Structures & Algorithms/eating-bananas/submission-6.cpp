class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi = 0;
        for(int i = 0; i < piles.size(); i++){
            if (piles[i] > maxi){
                maxi = piles[i];
            }
        }
        int low = 1;
        int store = 0;
        while(low <= maxi){
            int mid = (low + maxi) / 2;
            long long ans = 0;
            for(int i = 0; i < piles.size(); i++){
                long long a = ceil((double)piles[i] / mid);
                ans += a;
            }
            if (ans > h){
                low = mid + 1;
            }
            else {
                store = mid;
                maxi = mid - 1;
            }
        }
        return store;
    }
};
