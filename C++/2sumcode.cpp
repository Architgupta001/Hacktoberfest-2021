#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> map;
    vector<int> pairs;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            pairs.push_back(map.find(complement)->second);
            pairs.push_back(i);
            break;
        }
        map.insert(pair<int, int>(nums[i], i));
    }
    return pairs;
};

int main()
{
    int n, t, v;
    cout << "Enter size and target" << endl;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    vector<int> pair = twoSum(a, t);
    cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
    return 0;
}
