#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int num[n * 2];
    for (i = 0; i < n * 2; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << num[i] << " " << num[i + n] << " ";
    }
    return 0;
}