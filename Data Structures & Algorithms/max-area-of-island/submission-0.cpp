class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        int ans = 0;
        int maxi = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (grid[i][j] == 1 && !vis[i][j]){
                    q.push({i, j});
                    vis[i][j] = 1;
                    int maxi = 1;
                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();

                        for(auto [dr, dc]: dir){
                            int nr = r + dr;
                            int nc = c + dc;

                            if (nr >= n || nr < 0 || nc >= m || nc < 0){
                                continue;
                            }
                            else if (grid[nr][nc] == 1 && !vis[nr][nc]){
                                q.push({nr, nc});
                                vis[nr][nc] = 1;
                                maxi++;
                            }
                        }
                    }
                    ans = max(ans, maxi);
                }
            }
        }
        return ans;
    }
};
