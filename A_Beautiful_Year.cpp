//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, k = 0, n, s, t, y, temp;
    unordered_map<int, int> m;
    cin >> y;
    vector<int> v;
    for (int j = y + 1; j <= INT_MAX; j++)
    {
        int temp = j;
        for (int i = 0; i < 4; i++)
        {

            m[temp % 10]++;
            temp /= 10;
        }
        for (auto i : m)
        {
            v.push_back(i.second);
        }

        if (v[0] == v[1] && v[1] == v[2] & v[2] == v[3])
        {
                cout << j << endl;
            break;
        }
        m.clear();
        v.clear();
    }

    return 0;
}