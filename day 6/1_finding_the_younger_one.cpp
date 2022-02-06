#include <iostream>
using namespace std;

int main()
{
    int num, count = 0 ;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        count = 0;
        for (int j = 0; j < num; j++)
        {
            if(j != i && arr[j] < arr[i])
            {
                count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}