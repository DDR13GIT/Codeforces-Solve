/******************************************
*  Author : Debopriya Deb Roy  
*  Created On : Wed Jul 01 2020
*  File : c++ file
*******************************************/

#include<bits/stdc++.h>

using namespace std;
int main(){
int i,j,k,l,m,n;
int upr=0, lwr=0;
string s;
cin >>s;
n = s.size();
for (i=0; i<n; i++){
    if ('A' <= s[i] && 'Z'>= s[i])
        upr++;
    else if ('a' <= s[i] && 'z'>= s[i])
        lwr++;
}
if (upr < lwr){
    transform( s.begin(), s.end(), s.begin(), ::tolower);
    cout <<s;
}
    
else if ( lwr < upr){
    transform( s.begin(), s.end(), s.begin(), ::toupper);
    cout <<s;
}
if (upr == lwr){
    transform( s.begin(), s.end(), s.begin(), ::tolower);
    cout <<s;
}
    return 0;
}