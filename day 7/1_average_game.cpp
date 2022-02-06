#include<iostream>
using namespace std;

int main(){
    int num, k, count = 0, sum = 0;
    cin>>num>>k;
    float avg = 0;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    while(count < num){
        sum = 0;
        for(int i = 0;i<num;i++){
            if(i == count)
                continue;
            sum += arr[i];
        }
        avg = sum / (num-1);
        if(avg == k)
        {
            cout<<"true";
            break;
        }
        count++;
    }
    if(count == num)
        cout<<"false";
    return 0;
}