#include <iostream>
using namespace std;

int main()
{
    int n, i, count = 0;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[i] + 1 == num[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}