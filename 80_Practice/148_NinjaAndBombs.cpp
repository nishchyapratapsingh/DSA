#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getSafeState(vector<vector<int>> &grid, int n, int m)
{
    bool changed = true;

    while (changed)
    {
        changed = false;
        vector<vector<bool>> blast(n, vector<bool>(m, false));

        // Step 1: Mark horizontal blasts
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m - 2; ++j)
            {
                int val = grid[i][j];
                if (val != 0 && val == grid[i][j + 1] && val == grid[i][j + 2])
                {
                    blast[i][j] = blast[i][j + 1] = blast[i][j + 2] = true;
                    changed = true;
                }
            }
        }

        // Step 2: Mark vertical blasts
        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n - 2; ++i)
            {
                int val = grid[i][j];
                if (val != 0 && val == grid[i + 1][j] && val == grid[i + 2][j])
                {
                    blast[i][j] = blast[i + 1][j] = blast[i + 2][j] = true;
                    changed = true;
                }
            }
        }

        // Step 3: Blast bombs
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (blast[i][j])
                    grid[i][j] = 0;

        // Step 4: Apply gravity
        for (int j = 0; j < m; ++j)
        {
            int write = n - 1;
            for (int i = n - 1; i >= 0; --i)
            {
                if (grid[i][j] != 0)
                {
                    grid[write][j] = grid[i][j];
                    if (write != i)
                        grid[i][j] = 0;
                    write--;
                }
            }
        }
    }

    return grid;
}
