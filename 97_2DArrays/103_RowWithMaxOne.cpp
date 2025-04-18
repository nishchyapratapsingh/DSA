int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    vector<int> count(n, 0);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == 1) {
                count[i]++;
            }
        }
    }
    int flag=0;
    for (int i=0; i<n; i++) {
        if (count[i] >= 1) {
            flag = 1;
        }
    }

int maxi = *max_element(count.begin(), count.end());

    if(flag==1) {
    for (int i=0; i<n; i++) {
            if (count[i] == maxi) {
                return i;
            }
    }
    }
    return -1;
}