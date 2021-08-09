#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t = 5, i;
    string s;
    string::iterator it;
    string::iterator it1;
    string z="()";
    while(t--){
        cin >> s;
        for(it=s.begin(); it!=s.end(); it++){
            it1 = it + 1;
            if(*it=='o' || *it=='O'){
                s.replace(it, it1, z);
            }
        }
        cout << s << endl;
    }
    return 0;
}
