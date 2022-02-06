#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long n, max = 0, i, min, prev_max = 0;
    bool find_zero = false;
    cin >> n;
    long num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] == 0)
            find_zero = true;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (max < abs(num[i]))
        {
            for (int j = i + 1; j < n; j++)
            {
                if (num[i] + num[j] == 0)
                {
                    max = abs(num[i]);
                }
            }
        }
    }
    if (max == 0)
    {
        if (find_zero)
            cout << "0";
        else
            cout << "-1";
    }
    else
    {
        cout << max;
    }
    return 0;
}