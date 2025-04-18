class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int n = changed.size();
        if (n %2 != 0) return {};

        vector<int> original;

        sort(changed.begin(), changed.end());

        vector<bool> used(n, false);

        //pointers
        int i=0, j=0;

        while (i < n) {

            if (used[i]) {
                i++;
                continue;
            }

            j=max(j, i+1);
            while (j < n && (used[j] || changed[j] != 2*changed[i])) {
                j++;
            }

            if (j==n) return {};

            original.push_back(changed[i]);
            used[i] = true;
            used[j] = true;
            i++;
        
        }

        return original;
    }

};