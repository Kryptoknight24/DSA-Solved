class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Step 1: Multi-source BFS to compute distance to nearest thief for every cell
        vector<vector<int>> dist(n, vector<int>(n, -1));
        queue<pair<int,int>> q;
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 1) {
                    dist[r][c] = 0;
                    q.push({r, c});
                }
            }
        }
        
        vector<pair<int,int>> directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (auto& [dr, dc] : directions) {
                int nr = r + dr, nc = c + dc;
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
        
        // Step 2: Maximize the minimum "safeness" value along the path
        // using a max-heap Dijkstra-style traversal (widest path problem)
        vector<vector<int>> safeness(n, vector<int>(n, -1));
        safeness[0][0] = dist[0][0];
        
        // Max-heap: {safeness, r, c} — priority_queue is max-heap by default in C++
        priority_queue<tuple<int,int,int>> maxHeap;
        maxHeap.push({dist[0][0], 0, 0});
        
        while (!maxHeap.empty()) {
            auto [currSafe, r, c] = maxHeap.top();
            maxHeap.pop();
            
            // If we've already found a better (or equal) path to this cell, skip
            if (currSafe < safeness[r][c]) continue;
            
            if (r == n - 1 && c == n - 1) {
                return currSafe;
            }
            
            for (auto& [dr, dc] : directions) {
                int nr = r + dr, nc = c + dc;
                if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                    int newSafe = min(currSafe, dist[nr][nc]);
                    if (newSafe > safeness[nr][nc]) {
                        safeness[nr][nc] = newSafe;
                        maxHeap.push({newSafe, nr, nc});
                    }
                }
            }
        }
        
        return safeness[n-1][n-1];
        
    }
};