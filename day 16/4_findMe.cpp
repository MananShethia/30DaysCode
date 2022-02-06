#include <iostream>
using namespace std;

int main()
{
    int n, i, target, ins_index = 0, min = 0;
    bool flag = false;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        if (min < num[i])
        {
            min = num[i];
        }
    }
    cin >> target;
    for (i = 0; i < n; i++)
    {
        if (target < num[0])
        {
            break;
        }
        if (target == num[i])
        {
            flag = true;
            break;
        }
        if (target < num[i] && target > num[i-1])
        {
            ins_index = i;
        }
        else if(target > num[i])
        {
            ins_index = i + 1;
        }
    }
    if (flag)
        cout << i;
    else
        cout << ins_index;

    return 0;
}