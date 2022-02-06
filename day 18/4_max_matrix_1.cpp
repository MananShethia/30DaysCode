#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, count = 0, max = 0;
    cin >> n;
    int num[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }
    }
    for (i = 0; i < n * n; i++)
    {
        max = 0;
        for (j = 0; j < n; j++)
        {
            for (int  k = 0; k < n; k++)
            {
                num[j][k];
            }
            
            if (max <= num[i][j])
            {
                max = num[i][j];
            }
            // if (max <= num[j][i])
            // {
            //     max = num[j][i];
            // }
            // if(j == n-1)
            // {
            //     count++;
            // }
        }
        cout << max << endl;
    }
    cout << count;
    return 0;
}