#include <iostream>
using namespace std;

int main()
{
    int m, n, li, i, j, count = 0;

    cin >> m >> n >> li;

    int A[m][n];
    int coord[li * 2];

    for (i = 0; i < li * 2; i++)
    {
        cin >> coord[i];
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[i][j] = 0;
        }
    }

    for (int k = 0; k < li * 2; k++)
    {
        if (k % 2 == 0)
        {
            for (i = 0; i < n; i++)
                A[coord[k]][i] += 1;
        }
        else
        {
            for (i = 0; i < m; i++)
                A[i][coord[k]] += 1;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            // cout << A[i][j];
            if (A[i][j] % 2 != 0)
                count++;
        }
        // cout << endl;
    }
    cout << count;
    return 0;
}