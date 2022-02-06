#include <iostream>
using namespace std;

int main()
{
    int num;
    bool flag = false;
    cin >> num;
    while (num > 0)
    {
        if (num == 1)
            break;
        if (num % 2 == 0)
            num /= 2;
        else
        {
            flag = true;
            break;
        }
    }
    if (flag || num == 0)
        cout << "false";
    else
        cout << "true";
    return 0;
}