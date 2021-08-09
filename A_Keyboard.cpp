/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    char dir;
    string s;
    string kb{"qwertyuiopasdfghjkl;zxcvbnm,./"};
    vector<char> ans;
    cin >> dir;
    cin >> s;
    if (dir == 'R')
    {
        for (i = 0; i < s.length(); i++)
        {
            int pos = kb.find(s[i]);
            ans.push_back(kb[pos - 1]);
        }
    }
    else if (dir == 'L')
    {
        for (i = 0; i < s.length(); i++)
        {
            int pos = kb.find(s[i]);
            ans.push_back(kb[pos + 1]);
        }
    }
    for (auto dis : ans)
        cout << dis;
    return 0;
}