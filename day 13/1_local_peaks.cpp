#include <iostream>
using namespace std;

int main()
{
    long n, i;
    cin >> n;
    long num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (num[i] > num[i + 1])
            {
                cout << i << " ";
            }
        }
        if (i == n - 1)
        {
            if (num[i] > num[i - 1])
            {
                cout << i << " ";
            }
        }
        else
        {
            if (num[i] > num[i - 1] && num[i] > num[i + 1])
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}