#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int num[n], ans[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        ans[i] = num[num[i]];
        cout<<ans[i]<<" ";
    }
    
    return 0;
}