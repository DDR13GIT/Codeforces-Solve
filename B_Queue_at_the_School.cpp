//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
        t--;
    }
    cout << s;
    return 0;
}