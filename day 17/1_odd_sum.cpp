#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, sum = 1, total_sum = 1;
    cin >> n;
    while (i < n - 1)
    {
        sum += 2;
        total_sum += sum;
        i++;
    }
    cout << total_sum;
    return 0;
}