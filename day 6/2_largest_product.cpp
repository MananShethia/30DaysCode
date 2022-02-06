#include <iostream>
using namespace std;

int main()
{
    int num, max = 1, mul;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
                continue;
            mul = arr[i] * arr[j];
            if (mul > max)
                max = mul;
        }
    }
    cout << max;
    return 0;
}