#include <iostream>
using namespace std;

void union_count(int ar[], int br[], int nr, int mr)
{
    int i, j, k = 0, f;
    int c[nr + mr];
    for (i = 0; i < nr; i++)
    {
        c[k] = ar[i];
        k++;
    }

    for (i = 0; i < mr; i++)
    {
        f = 0;
        for (j = 0; j < nr; j++)
        {
            if (br[i] == ar[j])
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            c[k] = br[i];
            k++;
        }
    }
    cout<<k;
}

int main()
{
    int n , m , i = 0, j = 0, flag, count = 0;
    cin>>n>>m;
    int a[n], b[m];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    if (n >= m)
        union_count(a, b, n, m);
    else
        union_count(b, a, m, n);
        
    return 0;
}