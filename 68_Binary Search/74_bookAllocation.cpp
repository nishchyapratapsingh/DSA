bool isSolution (vector<int> arr, int n, int m, int mid) {
    int StudentCount = 1;
    int pageCount = 0;

    for (int i = 0; i < n; i++) {
        if (pageCount + arr[i] <= mid) {
            pageCount += arr[i];
        }

        else {
            StudentCount++;
            if (StudentCount > m || arr[i] > mid) {
                return false;
            }

            pageCount = arr[i]; //reset for next student
        }
    }

    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.

    if (m > n){
        return -1;
    }
    
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;

    while (e >= s) {
        if(isSolution( arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}