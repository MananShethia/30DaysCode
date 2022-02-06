#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, max_sum = 0;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num - 1; i++)
    {
        if (arr[i + 1] - arr[i] >= 0)
        {
            sum += arr[i + 1] - arr[i];
            if(max_sum < sum)
                max_sum = sum;
        }
        else
            sum = 0;
    }
    cout << max_sum;
    return 0;
}