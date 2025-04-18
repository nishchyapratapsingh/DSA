int firstOc(vector<int>& arr, int n, int k){

    int s = 0;
    int e = n-1;
    int m = s + (e - s)/2;
    int fo = -1;

    while(e >= s){

        if(arr[m] == k){
            fo = m;
            e = m-1;
        }

        else if(arr[m] < k){
            s = m + 1;
        }

        else
            e = m - 1;

        m = s + (e - s)/2;
    }

    return fo;
}

int lastOc(vector<int>& arr, int n, int k){

    int s = 0;
    int e = n-1;
    int m = s + (e - s)/2;
    int lo = -1;

    while(e >= s){

        if(arr[m] == k){
            lo = m;
            s = m+1;
        }

        else if(arr[m] < k){
            s = m + 1;
        }

        else
            e = m - 1;

        m = s + (e - s)/2;
    }

    return lo;
}