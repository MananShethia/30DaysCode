#include <iostream>
using namespace std;

int main()
{
    int n, i, max_altitude = 0;
    cin >> n;
    int num[n], gain[n + 1];
    gain[0] = 0;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
        gain[i + 1] = 0;
        gain[i + 1] = gain[i] + num[i];
        if (max_altitude < gain[i + 1])
            max_altitude = gain[i + 1];
    }
    cout << max_altitude;
    return 0;
}