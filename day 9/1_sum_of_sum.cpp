#include <iostream>
using namespace std;

int sum_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    long num, value;
    cin >> num;
    value = sum_digit(num);
    while (value > 10)
    {
        value = sum_digit(value);
    }
    cout << value;
    return 0;
}