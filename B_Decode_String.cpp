class Solution
{
public:
    long long minimumMoney(vector<vector<int>> &transactions)
    {
        long long result = 0;
        for (auto i : transactions)
        {
            long long temp = min(i[0], i[1]);
            result = max(result, temp);
        }
        for (auto i : transactions)
        {
            long long temp = i[0] - i[1];
            result += max(0, temp);
        }

        return result;
    }
};