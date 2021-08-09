/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,l,m,n;
vector<long long>vec;
cin >> n >> k;
 for(i=1; i<=n ;i++)
 {
     if (i%2 != 0)
     vec.push_back(i);
 }

 for(i=1; i<=n ;i++)
 {
     if (i%2 == 0)
     vec.push_back(i);
 }
 cout << vec[k-1];
    return 0;
}