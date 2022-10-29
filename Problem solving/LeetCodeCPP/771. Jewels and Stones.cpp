#include <iostream>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int n = jewels.length();
        int m = stones.length();

        unordered_map<char, int> mp;

        for (int i = 0; i < m; i++)
        {
            mp[stones[i]]++;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(jewels[i]) != mp.end())
            {
                cnt += mp.find(jewels[i])->second;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution solObj;
    cout << "Answer :" << solObj.numJewelsInStones("aA", "aAAbbbb") << endl;
    return 0;
}
