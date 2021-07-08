//Author: Debopriya Deb Roy | File : c++ file

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j = 0, k = 0, l, m, n, x = 0, y, z;
    int arr[350];
    cin >> n;
    for (i = 0; i < n*3; i += 3)
    {
        cin >> arr[i] >> arr[i + 1] >> arr[i + 2];
    }
    while (k < 3)
    {
        while (j < (n * 3))
        {
            x += arr[j];
            j += 3;
        }
        if (x != 0)
            break;
        k++;
        j = k;
    }
    if (x == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}