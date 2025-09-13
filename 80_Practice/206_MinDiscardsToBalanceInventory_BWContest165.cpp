class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int l=0;
        int r=0;
        int n=arrivals.size();
        int discarded=0;
        unordered_map<int, int> freq;
        vector<bool> kept(n, false);

        while(r<n) {
            if (r>=w ) {
                if (kept[l]){
                    freq[arrivals[l]]--;
                    if (freq[arrivals[l]]==0) {
                        freq.erase(arrivals[l]);
                    }
                }
                l++;
            }
            if (freq[arrivals[r]]>=m) {
                discarded++;
                kept[r]=false;
            } else {
                freq[arrivals[r]]++;
                kept[r]=true;
            }
            r++;
        }
        return discarded; 
    }
};©leetcode