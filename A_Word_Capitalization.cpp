//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n, s, t;
    string str;
    cin >> str;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    cout << str << endl;
    return 0;
}