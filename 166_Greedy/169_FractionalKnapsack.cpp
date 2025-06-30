// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution
{
    struct Items
    {
        int value;
        int weight;
        double ratio;
    };

public:
    double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity)
    {
        // code here
        int n = val.size();
        vector<Items> itemVec;
        for (int i = 0; i < n; i++)
        {
            itemVec.push_back({val[i], wt[i], ((double)val[i] / wt[i])});
        }

        sort(itemVec.begin(), itemVec.end(), [](Items &a, Items &b)
             { return a.ratio > b.ratio; });
        double value = 0;
        int filled = 0;
        int i = 0;
        while (i < n)
        {

            if (filled + itemVec[i].weight < capacity)
            {
                filled += itemVec[i].weight;
                value += itemVec[i].value;
                i++;
            }
            else if (filled + itemVec[i].weight == capacity)
            {
                return value + itemVec[i].value;
            }

            else if (filled + itemVec[i].weight > capacity)
            {
                double temp = capacity - filled;
                return value + (itemVec[i].value * temp / itemVec[i].weight);
            }
        }

        return value;
    }
};
