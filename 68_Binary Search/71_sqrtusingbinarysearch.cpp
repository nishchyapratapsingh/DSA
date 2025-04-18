class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int m = s + (e - s)/2;

        while (e > s) {
            if (m*m == x){
                return m;
            }

            else if (m*m < x){
                s = m+1;
            }

            else
                e = m-1;

            m = s + (e - s) / 2;
        }

        return s-1; //return nearest integer
    }
};