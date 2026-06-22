class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<tuple<int,int,int>> q;
        vector<pair<int,int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (grid[i][j] == 2){
                    q.push({i, j, 0});
                }
            }
        }
        int t = 0;
        while(!q.empty()){
            auto [r, c, time] = q.front();
            t = time;
            q.pop();

            for(auto [dr, dc] : dir){
                int nr = r + dr;
                int nc = c + dc;

                if (nr < 0 || nc < 0 || nr >= n || nc >= m){
                    continue;
                }
                else if (grid[nr][nc] == 1){
                    grid[nr][nc] = 2;
                    q.push({nr, nc, t + 1});
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (grid[i][j] == 1) return -1;
            }
        }
        return t;
    }
};