class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<double> time(n);
        map<int, double> temp;

        // compute times
        for (int i = 0; i < n; i++) {
            time[i] = double(target - position[i]) / speed[i];
        }

        // map: position → time (sorted automatically by position ASC)
        for (int i = 0; i < n; i++) {
            temp[position[i]] = time[i];
        }

        // iterate from farthest to closest (reverse iterator)
        int count = 0;
        double slowest = 0;

        for (auto it = temp.rbegin(); it != temp.rend(); it++) {
            double t = it->second;
            if (t > slowest) {
                count++;
                slowest = t;
            }
        }

        return count;
    }
};
