#include <iostream>
using namespace std;

int main()
{
    int nu, in, index_size = 0, i;
    cin >> nu >> in;
    int num[nu], index[in], target[in];
    for (i = 0; i < nu; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < in; i++)
    {
        cin >> index[i];
        target[i] = -1;
    }

    for (i = 0; i < in; i++)
    {
        if (target[index[i]] == -1)
            target[index[i]] = num[i];
        else
        {
            for (int j = in - 1; j >= index[i]; j--)
            {
                target[j] = target[j - 1];
            }
            target[index[i]] = num[i];
        }
    }

    for (int k = 0; k < in; k++)
    {
        cout << target[k] << " ";
    }

    return 0;
}