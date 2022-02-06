#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, i, count = 0, sum = 0;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sum = num[i] + num[j];
            if(ceil(log2(sum)) == floor(log2(sum)))
            {
                // cout<<num[i]<<" "<<num[j]<<" "<<sum<<endl;
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}