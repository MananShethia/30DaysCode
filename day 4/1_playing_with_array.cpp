#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sum += arr[i];
        arr[i] = sum;
        cout<<sum<<" ";
    }
    return 0;
}