#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        cout << num[i] << " ";
    }
    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}