#include <iostream>
using namespace std;

int main()
{
    int n, i, max = 0;
    cin >> n;
    bool flag = false;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        if (max < num[i])
            max = num[i];
    }
    int dict[max];
    for (i = 0; i < max; i++)
    {
        dict[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        dict[num[i]]++;
        if (dict[num[i]] == num[i])
        {
            cout << "true";
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "false";
    }
    return 0;
}