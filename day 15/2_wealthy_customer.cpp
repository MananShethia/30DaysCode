#include <iostream>
using namespace std;

int main()
{
    int m, n, i, max = 0, sum;
    cin >> m >> n;
    int num[m][n];
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
            sum += num[i][j];
        }
        if (max < sum)
            max = sum;
    }
    cout << max;
    return 0;
}