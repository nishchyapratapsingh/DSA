class Solution {
  public:
    
    
    vector<int> removeduplicates(vector<int> arr) {
        int n= arr.size();
        vector<int> result;
        
        for (int i=0; i<n; i++) {
            
            result.push_back(arr[i]);
            
            while (i<n-1 && arr[i+1]==arr[i]) {
                i++;
            }
        }
        
        return result;
        
    }
        
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int> result;
        int n = a.size(); 
        int m = b.size();
        
        int i=0;
        int j=0;
        while (i<n && j<m) {
            
                if (a[i] <= b[j]) {
                    result.push_back(a[i]);
                    i++;
                }
                else  {
                    result.push_back(b[j]);
                    j++;
                }
            
        }
        
        while (i < n) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
        }

        while (j < m) {
            if (result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }
            j++;
        }
        
        result = removeduplicates(result);
        return result;
        
    }
};
