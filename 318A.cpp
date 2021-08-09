/******************************************
*  Author : Debopriya Deb Roy  
*  Created On : Wed Jul 01 2020
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i, j=1, k, l, m, n;
    cin >> n >> k ;
    vector<int> v1;
    vector<int> v2;
    for (i = 0; i <n; i++)
    {
        v1.push_back(j);
        j++;
    }
    
    for (i=0; i<=n; i++){
        if (v1[i]%2 !=0 )
            v2.push_back(v1[i]);
    }
    for (i=0; i<=n; i++){
        if (v1[i]%2 ==0 )
            v2.push_back(v1[i]);
    }
    v2.shrink_to_fit();
    v1.shrink_to_fit();
    cout << v2[k-1];
}