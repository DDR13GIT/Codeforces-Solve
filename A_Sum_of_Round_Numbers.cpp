/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j = 10, k = 1, l = 10, m, n, t, count = 0;
    int arr[10000];
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < t; i++)
    {
        int size = log10(arr[i]) + 1;
        int temp = arr[i];
        
        for (m = 0; m <= size; m++)
        {
            if (temp % j != 0)
            {
                count++;
                temp = temp / j;
            }
            else
            temp = temp / j;
            
            
        }
        cout << count << endl;

        while (arr[i] != 0)
        {
                if (arr[i] % l != 0)
            {
                cout << (arr[i] % l) * k << " ";
                arr[i] = arr[i] / l;

                k *= 10;
            }
            else
            {
                k *= 10;
                arr[i] = arr[i] / l;
            }
        }
        cout << endl;
        l = 10, k = 1, count = 0;
    }
    return 0;
}