#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        if(num[i] == i)
        {
            cout<<i;
            break;
        }
        if(i == n-1)
        {
            cout<<-1;
        }
    }
    return 0;
}