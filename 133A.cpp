/******************************************
*  Author : Debopriya Deb Roy  
*  Created On : Wed Jul 01 2020
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j=0, k, l, m, n;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            j++;
        }
        
        
    }
    
    if (j==0)
        cout << "NO";
    else
    {
        cout << "YES";
    }
    
    return 0;
}