#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n, f, i, flower = 0, new_len = 0;
    cin >> n;
    long num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> f;
    for (i = 0; i < n; i++)
    {
        if (f != 0)
        {
            if (i == 0)
            {
                if (num[i] == 0 && num[i + 1] != 1)
                {
                    num[i] = 1;
                    f--;
                }
            }
            if (i == n - 1)
            {
                if (num[i] == 0 && num[i - 1] != 1)
                {
                    num[i] = 1;
                    f--;
                }
            }
            else
            {
                if (num[i] == 0 && num[i - 1] != 1 && num[i + 1] != 1)
                {
                    num[i] = 1;
                    f--;
                }
            }
        }
    }
    if (f == 0)
        cout << "true";
    else
        cout << "false";
    return 0;
}