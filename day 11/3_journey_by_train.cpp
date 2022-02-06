#include <iostream>
using namespace std;

int main()
{
    int nb, i, train;
    cin >> nb;
    int booking[nb][3];
    for (i = 0; i < nb; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> booking[i][j];
        }
    }
    cin>>train;
    int seats[train];
    for (i = 0; i < train; i++)
    {
        seats[i] = 0;
    }
    for (i = 0; i < nb; i++)
    {
        for (int k = booking[i][0] - 1; k <= booking[i][1] - 1; k++)
        {
            seats[k] += booking[i][2];
        }
    }
    for (i = 0; i < train; i++)
    {
        cout << seats[i] << " ";
    }
    return 0;
}