/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            cout << " ";
            i += 2;
        }
        else
            cout << s[i];
    }
    return 0;
}