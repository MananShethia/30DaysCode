#include <iostream>
using namespace std;

int main()
{
    int n, i, j, sum = 0, condition, prev_condition = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        condition = 0;
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[i] > arr[j])
            {
                condition++;
            }
            else
            {
                break;
            }
        }
        if (condition > prev_condition)
        {
            sum = i;
            prev_condition = condition;
        }
    }
    cout << sum;
    return 0;
}