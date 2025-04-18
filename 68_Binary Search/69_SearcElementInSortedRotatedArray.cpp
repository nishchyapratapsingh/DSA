int getpivot(vector<int>&A, int n){

    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(e>s){

        if(A[m] >= A[0]){
            s = m+1;
        }

        else
            e = m;

        m = s+(e-s)/2;
    }

    return s;

}

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    
    int pivot = getpivot(A, A.size());

    if(key <= A[n-1] && key >= A[pivot]){
        //binary search in 2nd monotonic fn

        int s = pivot;
        int e = n-1;
        int m = s + (e-s)/2;

        while(e>=s){
            if(A[m] == key){
                return 1;
            }

            else if(A[m] > key){
                e = m-1;
            }

            else
                s = m+1;
            
            m = s+(e-s)/2;
        }
    }

    else{
        //binary search in 1st monotonic fn

        int s = 0;
        int e = pivot - 1;
        int m = s+(e-s)/2;

        while(e>=s){
            if(A[m] == key){
                return True;
            }

            else if(A[m] > key){
                e = m-1;
            }

            else
                s = m+1;
            
            m = s+(e-s)/2;
        }

        return False;
    }
}
