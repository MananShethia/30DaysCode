#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int max1 = arr[0], max2 = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == max1)
            continue;
        if (max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
            continue;
        }
        if (max2 < arr[i] && max2 < max1)
        {
            max2 = arr[i];
        }
    }
    if (max1 > max2 * 2)
        cout << "true";
    else
        cout << "false";

    return 0;
}