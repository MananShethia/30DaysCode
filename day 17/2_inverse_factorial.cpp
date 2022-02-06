#include <iostream>
using namespace std;

long ff(long n)
{
    long f = 1;
    for (long i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    long fact, i = 1, inv_fact;
    cin >> fact;
    while (1)
    {
        inv_fact = ff(i);
        if (inv_fact == fact)
        {
            cout << i;
            break;
        }
        if (i > fact / 2)
        {
            cout << -1;
            break;
        }
        i++;
    }
    return 0;
}