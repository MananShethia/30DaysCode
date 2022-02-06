#include <iostream>
using namespace std;

int main()
{
    int n, i, target;
    cin>>n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cin>>target;

    for (i = 0; i < n; i++)
    {
        if (num[i] >= target)
        {
            cout << num[i];
            break;
        }
        if (i == n - 1)
            cout << -1;
    }

    return 0;
}