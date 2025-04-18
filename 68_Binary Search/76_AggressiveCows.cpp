bool issolution(vector<int> &stalls, int k, int n, int m) {
    int currcow = 1;
    int lastpos = stalls[0];

    for (int i=1; i<n; i++) {
        if (stalls[i] - lastpos >= m) {
            currcow++;
            lastpos = stalls[i];
            if(currcow == k){
                return true;
            }
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int e = stalls[n - 1] - stalls[0];
    int m = s + (e-s)/2;
    int ans = -1;

    while (e >= s) {
        if (issolution(stalls, k, n, m)) {
            ans = m;
            s = m + 1;
        }

        else    
            e = m - 1;

        m = s + (e-s)/2;
    }

    return ans;
}