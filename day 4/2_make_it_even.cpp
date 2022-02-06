#include<iostream>
using namespace std;

int main(){
    int num, len = 0, count = 0, temp;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        len = 0;
        while(arr[i] > 0){
            len++;
            arr[i] /= 10;
        }
        if(len%2 == 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}