#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int num[n+1];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    if (num[n - 1] != 9)
    {
        num[n - 1] += 1;
    }
    else if(num[n - 1] == 9 && n != 1)
    {
        num[n - 1] = 0;
        num[n - 2] += 1;
    }
    else
    {
        n += 1;
        num[0] = 1;
        num[1] = 0;
    }
    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}