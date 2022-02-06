#include<iostream>
using namespace std;

int main(){
    int num;
    bool flag = false;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-2;i++){
        for(int j=i+1;j<num-1;j++){
            for(int k=j+1;k<num;k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    cout<<"true";
                    // return 0;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    if(!flag)
        cout<<"false";
    return 0;
}