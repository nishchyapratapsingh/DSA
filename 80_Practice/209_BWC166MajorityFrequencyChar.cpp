class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char, int> freq;
        for (char c: s) {
            freq[c]++;
        }
        unordered_map<int, vector<char>> dist;
        for (auto &f: freq) {
            dist[f.second].push_back(f.first);
        }
        int maxS=INT_MIN;
        int maxF=INT_MIN;
        vector<char> result;
        for (auto &d: dist) {
            int sz = d.second.size();
            int fr = d.first;

            if (sz>maxS || (sz==maxS && fr>maxF)) {
                maxS = sz;
                maxF = fr;
                result = d.second;
            }
        }
        string ans(result.begin(), result.end());
        return ans;
    }
};©leetcode