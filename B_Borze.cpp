//Author: Debopriya Deb Roy

#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
int i,j,n,t;
string s;
cin >> s;

for(i=0; i <=s.size(); i++){
    if(s[i] == '.')
    {
        cout << '0';
    }
    else if(s[i] == '-' && s[i+1] == '.')
    {
        cout << '1';
        i++;
    }
    else if(s[i] == '-' && s[i+1] == '-')
    {
        cout << '2';
        i++;
    }
}
return 0;
}