#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n, i, k, number = 0, new_len = 0;
    cin >> n;
    long num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        number += (num[i] * pow(10, n - i - 1));
    }
    cin >> k;
    number += k;
    i = 0;
    while (number > 0)
    {
        num[i] = number % 10;
        number /= 10;
        i++;
        new_len++;
    }
    for (i = new_len - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
    return 0;
}