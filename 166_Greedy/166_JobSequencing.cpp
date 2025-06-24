// Without DSU (worst case- O(n^2))
class Solution
{
public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
    {
        int n = deadline.size();
        vector<pair<int, int>> jobs;
        int maxDeadline = 0;
        for (int i = 0; i < n; i++)
        {
            jobs.push_back({profit[i], deadline[i]});
            maxDeadline = max(maxDeadline, deadline[i]);
        }

        sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());

        vector<bool> slot(maxDeadline, false);
        int count = 0, totalProfit = 0;

        for (auto job : jobs)
        {
            int prof = job.first;
            int dead = job.second;

            for (int j = min(dead, maxDeadline) - 1; j >= 0; j--)
            {
                if (!slot[j])
                {
                    slot[j] = true;
                    count++;
                    totalProfit += prof;
                    break;
                }
            }
        }

        return {count, totalProfit};
    }
};

// With DSU
class Solution
{
    int find(int s, vector<int> &parent)
    {
        if (parent[s] == s)
            return s;
        return parent[s] = find(parent[s], parent);
    }

public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
    {
        // code here
        int n = deadline.size();
        int maxdeadline = 0;
        vector<pair<int, int>> proSorted;
        for (int i = 0; i < n; i++)
        {
            proSorted.push_back({profit[i], deadline[i]});
            maxdeadline = max(maxdeadline, deadline[i]);
        }

        sort(proSorted.begin(), proSorted.end(), greater<pair<int, int>>());

        vector<int> parent(maxdeadline + 1);
        for (int i = 0; i <= maxdeadline; i++)
        {
            parent[i] = i;
        }

        int count = 0;
        int totalprofit = 0;

        for (auto &job : proSorted)
        {
            int prof = job.first;
            int dead = job.second;

            int availableslot = find(dead, parent);

            if (availableslot > 0)
            {
                parent[availableslot] = find(availableslot - 1, parent);
                count++;
                totalprofit += prof;
            }
        }

        return {count, totalprofit};
    }
};
