//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n, t, upr = 0, lwr = 0;
    string s;
    cin >> s;
    n = s.size();
    for (i = 0; i < n; i++)
    {
        if ('A' <= s[i] && 'Z' >= s[i])
            upr++;
        else if ('a' <= s[i] && 'z' >= s[i])
            lwr++;
    }
    if (upr < lwr)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }

    else if (lwr < upr)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    if (upr == lwr)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    return 0;
}