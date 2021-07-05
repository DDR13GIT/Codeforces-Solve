//Author: Debopriya Deb Roy | File : c++ file

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, j = 0, k, l, m, n, t=0;
    cin >> t;
    int arr[4];
    for (i = 0; i < t; i++)
    {
        while (j < 4)
        {
            cin >> arr[j];
            j++;
        }
        if (arr[0] > arr[1])
            m = arr[0];
        else
            m = arr[1];
        if (arr[2] > arr[3])
            n = arr[2];
        else
            n = arr[3];
        sort(arr, arr + 4);
        if (m > n)
        {
            if (m == arr[3] && n == arr[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (n == arr[3] && m == arr[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        j = 0;
    }

    return 0;
}