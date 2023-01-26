class Solution
{
public:
  int max(int a, int b)
  {
    if (a >= b)
      return a;
    return b;
  }

  int maximumValue(vector<string> &strs)
  {
    int maxi = INT_MIN;
    for (int i = 0; i < strs.size(); i++)
    {
      string temp = strs[i];
      bool flag = false;
      for (auto c : temp)
      {
        if (c >= 'a' && c <= 'z')
        {
          flag = true;
          break;
        }
      }
      if (flag)
        maxi = max(maxi, temp.size());
      else
        maxi = max(maxi, stoi(temp));
    }
    return maxi;
  }
};