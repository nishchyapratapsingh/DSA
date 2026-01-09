//number of steps
class Solution {
    void solve(int n, int from, int to, int aux, int &cnt) {
        if (n == 1) {
            return;
        }
        cnt++;
        solve(n-1, from, aux, to, cnt);
        solve(n-1, aux, to, from, cnt);
        return;
    }
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        int cnt = 0;
        solve(n, from, to, aux, cnt);
        return cnt;
    }
};

//all steps
void solve(int n, int from, int to, int aux, vector<vector<int>> &res) {
    if (n == 1) {
        res.push_back({from, to});
        return;
    }
    solve(n-1, from, aux, to, res);
    res.push_back({from, to});
    solve(n-1, aux, to, from, res);
    return;
}

vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> res;
    solve(n, 1, 2, 3, res);
    return res;
}