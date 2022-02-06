#include <iostream>
using namespace std;

int main()
{
    int n, i, ans;
    cin >> n;
    bool flag = false;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                ans = num[i];
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << ans;
    return 0;
}