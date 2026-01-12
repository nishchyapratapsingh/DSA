class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<bool> primes(n+1, true);
        for (int i = 2; i*i <= n; i++) {
            if (primes[i]) {
                for (int j = i*i; j <= n; j = j+i) {
                    primes[j] = false;
                }
            }
        }
        vector<int> ans;
        for (int i = 2; i <= n; i++) {
            if (primes[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};