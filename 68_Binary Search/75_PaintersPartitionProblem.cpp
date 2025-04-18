bool issolution(vector<int> boards, int k, int n, int m) {
    int currpainter = 1;
    int noofunits = 0;

    for (int i=0; i<n; i++) {
        if (noofunits + boards[i] <= m) {
            noofunits += boards[i];
        }

        else {
            currpainter++;

            if (currpainter > k || boards[i] > m) {
                return false;
            }

            noofunits = boards[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int sum = 0;

    for (int i=0; i<n; i++) {
        sum += boards[i];
    }

    int s = 0;
    int e = sum;
    int ans = -1;
    int m = s + (e-s)/2;

    while (e >= s) {
        if (issolution(boards, k, n, m)) {
            ans = m;
            e = m - 1;
        }

        else 
            s = m + 1;

        m = s + (e-s)/2;
    }

    return ans;
}