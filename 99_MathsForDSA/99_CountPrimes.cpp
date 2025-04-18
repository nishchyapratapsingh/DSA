//we use the sieve of eratosthenes approach 
// O(n*log(log n))

class Solution {
public:
    int countPrimes(int n) {

        vector <bool> isPrime(n+1, true);

        isPrime[0] = isPrime[1] = false; //0 and 1 are not prime

        int count = 0;

        for (int i=2; i<n; i++) {

            if (isPrime[i]) {
                count++;

                for (int j=i*2; j<n; j=j+i) {  //j=i*2 then i*3 and so on
                    isPrime[j] = false;
                }
            }
        }
        return count;

    }
};


