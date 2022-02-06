#include <iostream>
using namespace std;

int main()
{
    int n, i, j, count = 0;
    cin >> n;
    int num[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> num[i][j];
            num[i][j] = !num[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}