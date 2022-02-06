#include <iostream>
using namespace std;

int main()
{
    int n, i, first_sum = 0, second_sum = 0;
    bool flag = false;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    first_sum = num[0];
    for (i = 1; i < n - 1; i++)
    {
        second_sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            second_sum += num[j];
        }
        if (first_sum == second_sum)
        {
            cout << i;
            flag = true;
            break;
        }
        first_sum += num[i];
    }
    if (!flag)
    {
        cout << -1;
    }
    return 0;
}