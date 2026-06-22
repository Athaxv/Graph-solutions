class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 0;
        if (x == 0) {
            return 0;
        }
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long y = mid * mid;
            if (y > x){
                high = mid - 1;
            }
            else if (y < x){
                low = mid + 1;
                ans = mid;
            }
            else {
                return mid;
            }
        }
        return ans;
    }
};