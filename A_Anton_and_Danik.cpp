//Author: Debopriya Deb Roy | File : c++ file

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i = 0,n, countA = 0, countB = 0;
    cin >> n;
    char arr[100000];
    while (n--)
    {
        cin >> arr[i];
        if (arr[i] == 'A')
            countA++;
        else if (arr[i] == 'D')
            countB++;
        i++;
    }
    if (countA>countB)
    cout<< "Anton";
    else if (countA==countB)
    cout << "Friendship";
    else if ( countA<countB)
    cout << "Danik";
    

    return 0;
}