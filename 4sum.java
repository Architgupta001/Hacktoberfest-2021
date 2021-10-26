Class Solution {
public:
  

















vector<vector<int>> fourSum(vector<int>& v, int t) {

    return kSum(v, t, 4);

}

vector<vector<int>> kSum(vector<int>& v, int t, int k) {

    const int n = v.size();

    if (n < k)

        return {};

    sort(v.begin(), v.end());

    vector<int> prefix_ids;

    for (int i = 0; i < k - 2; i++)

        prefix_ids.push_back(i);

    set<vector<int>> tuples;

    do

    {

        vector<int> prefix_v;

        long long prefix_sum = 0;

        for (int i : prefix_ids) {

            prefix_sum += v[i];

            prefix_v.push_back(v[i]);

        }

        for (int l = prefix_ids.back() + 1, r = n - 1; l < r; l++, r--) {

            const long long sum = prefix_sum + v[l] + v[r];

            if (sum < t)

                r++;

            else if (sum > t)

                l--;

            else {

                vector<int> suffix_v = {v[l], v[r]};

                

                vector<int> tuple;

                tuple.insert(tuple.end(), prefix_v.begin(), prefix_v.end());

                tuple.insert(tuple.end(), suffix_v.begin(), suffix_v.end());

                tuples.emplace(tuple);

            }

        }

    } while (next_combination(prefix_ids, n - k + 1));

    return vector(tuples.begin(), tuples.end());

}

bool next_combination(vector<int>& v, int m) {

    const int n = v.size();

    int i = n - 1;

    int j = m;

    while (i >= 0 && v[i] >= j) {

        i--;

        j--;

    }

    if (i < 0)

        return false;

    for (v[i++]++; i < n; i++)

        v[i] = v[i - 1] + 1;

    return true;

}
