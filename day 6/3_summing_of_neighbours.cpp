#include <iostream>
using namespace std;

int main()
{
    int n, k, sum = 0, max;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 3; i++)
    {   
        sum = 0;
        for (int j = i; j < k + i; j++)
        {
            sum += arr[j];
        }
        if(i == 0)
            max = sum;
        if(max < sum)
        {
            max = sum;
        }
    }
    cout<<max;
    return 0;
}