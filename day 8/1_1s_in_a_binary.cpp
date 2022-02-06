#include <iostream>
using namespace std;

int main()
{
    int num, i = 0, count = 0, binary[100];
    cin >> num;
    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    i -= 1;
    while (i >= 0)
    {
        if (binary[i] == 1)
            count++;
        i--;
    }
    cout << count;
}