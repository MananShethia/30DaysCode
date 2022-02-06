#include <iostream>
using namespace std;

int main()
{
    int n = 5, i;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int k, sum = 0;
    bool flag = false;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        sum = num[i];
        for (int j = 0; j < n; j++)
        {
            sum += num[j];
            if (sum == k)
            {
                flag = true;
                break;
            }
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