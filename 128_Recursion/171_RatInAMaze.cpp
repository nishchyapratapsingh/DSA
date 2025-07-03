class Solution
{

    void backtrack(vector<vector<int>> &maze, set<string> &result, vector<bool> &visited, string currStr, int n, int i, int j)
    {
        if (i == n - 1 && j == n - 1)
        {
            result.insert(currStr);
            return;
        }

        if (i < n - 1 && maze[i + 1][j] != 0 && !visited[(i + 1) * n + j])
        {
            currStr.push_back('D');
            visited[(i + 1) * n + j] = true;
            backtrack(maze, result, visited, currStr, n, i + 1, j);
            currStr.pop_back();
            visited[(i + 1) * n + j] = false;
        }
        if (j < n - 1 && maze[i][j + 1] != 0 && !visited[(i)*n + j + 1])
        {
            currStr.push_back('R');
            visited[(i)*n + j + 1] = true;
            backtrack(maze, result, visited, currStr, n, i, j + 1);
            currStr.pop_back();
            visited[(i)*n + j + 1] = false;
        }
        if (i > 0 && maze[i - 1][j] != 0 && !visited[(i - 1) * n + j])
        {
            currStr.push_back('U');
            visited[(i - 1) * n + j] = true;
            backtrack(maze, result, visited, currStr, n, i - 1, j);
            currStr.pop_back();
            visited[(i - 1) * n + j] = false;
        }
        if (j > 0 && maze[i][j - 1] != 0 && !visited[(i)*n + j - 1])
        {
            currStr.push_back('L');
            visited[(i)*n + j - 1] = true;
            backtrack(maze, result, visited, currStr, n, i, j - 1);
            currStr.pop_back();
            visited[(i)*n + j - 1] = false;
        }
    }

public:
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int n = maze.size();
        vector<bool> visited(n * n, false);
        set<string> result;
        if (maze[0][0] == 0)
            return {};
        visited[0] = true;

        backtrack(maze, result, visited, "", n, 0, 0);
        vector<string> resVec(result.begin(), result.end());
        return resVec;
    }
};