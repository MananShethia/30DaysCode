#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, count = 0, ch = 0;
    cin >> n;
    bool flag = false;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch++;
            if (i == j)
                count++;
            if (ch == n)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << count;
    return 0;
}