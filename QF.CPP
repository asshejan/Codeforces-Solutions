#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int directions[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, 
                              {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool canEscape(int n, int m, int x, vector<vector<char>>& grid) {
    // BFS initialization
    queue<pair<int, int>> q;
    q.push({0, 0}); // Start BFS from top-left corner (cell (0, 0))
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[0][0] = true;

    while (!q.empty()) {
        int currRow = q.front().first;
        int currCol = q.front().second;
        q.pop();

        // Check if we've reached the bottom-right corner (cell (n-1, m-1))
        if (currRow == n - 1 && currCol == m - 1) {
            return true; // Captain Cold can escape
        }

        // Explore all 8 possible directions
        for (int d = 0; d < 8; ++d) {
            int nextRow = currRow + directions[d][0];
            int nextCol = currCol + directions[d][1];

            // Check boundary conditions
            if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < m && !visited[nextRow][nextCol]) {
                visited[nextRow][nextCol] = true;
                
                if (grid[nextRow][nextCol] == '.') {
                    // Cell is a lake, check if we can freeze it
                    if (x > 0) {
                        // Use power to freeze the lake
                        grid[nextRow][nextCol] = '#';
                        q.push({nextRow, nextCol});
                    }
                } else if (grid[nextRow][nextCol] == '#') {
                    // Cell is land, proceed with BFS
                    q.push({nextRow, nextCol});
                }
            }
        }
    }

    return false; // Captain Cold cannot reach the bottom-right corner
}

int main() {
    int t;
    cin >> t;

    for (int testCase = 1; testCase <= t; ++testCase) {
        int n, m, x;
        cin >> n >> m >> x;

        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        // Check if Captain Cold can escape
        bool result = canEscape(n, m, x, grid);

        // Output the result for the current test case
        cout << "Case #" << testCase << ": ";
        if (result) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
