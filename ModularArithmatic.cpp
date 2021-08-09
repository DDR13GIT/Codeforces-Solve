//Author: Debopriya Deb Roy | File : c++ file

#include<bits/stdc++.h>
using namespace std;

unsigned long long int factorial(int n){
    const unsigned int M = 1000000007;
    unsigned long long f = 1;
    for (int i = 0; i <= n;i++){
        f = (f * i) % M;
        //now f can never exceed 10^9+7
    }
    return f % M;
}

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int i,j,k,l,m,n;

cout << factorial(456789);

return 0;
}