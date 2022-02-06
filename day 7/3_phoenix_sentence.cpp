#include <iostream>
using namespace std;

int main()
{
    int num = 26;
    int arr[num];
    string sentence;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    cin >> sentence;
    // string sentence = "thequickbrownfoxjumpsoverthelazydog";
    for (int i = 0; i < sentence.length(); i++)
    {
        arr[sentence[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 1)
        {
            if(i == 25)
                cout<<"true";
            continue;
        }
        else
        {
            cout << "false";
            break;
        }
    }
    return 0;
}