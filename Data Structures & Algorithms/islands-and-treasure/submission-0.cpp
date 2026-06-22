class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<pair<int,int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        const int INF = 2147483647;
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                count = 0;
                if (grid[i][j] == 0){
                    q.push({i, j}); 
                }
            }
        }
        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            for(auto [dr, dc]: dir){
                int nr = r + dr;
                int nc = c + dc;

                if (nr >= n || nc >= m || nc < 0 || nr < 0){
                    continue;
                }
                else if (grid[nr][nc] == INF){
                    grid[nr][nc] = grid[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
};
