#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    bool flag = false;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        num[i] = pow(num[i], 2);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {

                if (num[i] + num[j] == num[k])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "true";
    else
        cout << "false";
    return 0;
}