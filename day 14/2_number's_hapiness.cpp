#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i = 0, sum = 0, ans = 0;
    cin >> n;
    bool flag = true;
    while (flag == true)
    {
        while (n > 0)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        if (sum == 1)
        {
            ans = 1;
            break;
        }
        else
        {
            n = sum;
            sum = 0;
        }
        i++;
        if (i > 300)
            break;
    }
    if (ans == 1)
        cout << "true";
    else
        cout << "false";
    return 0;
}