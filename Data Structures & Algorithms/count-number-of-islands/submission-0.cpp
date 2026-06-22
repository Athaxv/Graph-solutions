class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        int ans = 0;
        vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (grid[i][j] == '1' && !vis[i][j]){
                    ans++;
                    q.push({i, j});
                    vis[i][j] = 1;

                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();

                        for(auto [dr, dc]: dir){
                            int nr = r + dr;
                            int nc = c + dc;

                            if (nr >= n || nr < 0 || nc < 0 || nc >= m){
                                continue;
                            }
                            else if (grid[nr][nc] == '1' && !vis[nr][nc]){
                                q.push({nr, nc});
                                vis[nr][nc] = 1;
                            }
                        }
                    }
                }
            }
        }
        
        
        return ans;
    }
};
