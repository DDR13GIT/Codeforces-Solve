//Author: Debopriya Deb Roy | File : c++ file

#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int i,j,k,l,m,n,t;


cin >> t;

while(t--)
{
    cin >> n;
    vector<int> v1(n + 1), v2(n + 2);
    for ( j = 0; j < n; j++)
    {
        cin >> v[j];
    }

    sort(v.begin(), v.end());
    
    auto it1 = min_element(v1.begin(), it);

    for (i = 1; i <= n; i++){
        if(*it == v[i])
            cout << i;
        cout << "\n";
        
        
    }
}

    return 0;
}