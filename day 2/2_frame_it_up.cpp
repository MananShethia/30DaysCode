#include<iostream>
using namespace std;

int main(){
    int num, i=0, a[10], num_dupli, len=0;
    cin>>num;
    num_dupli = num;
    while(num_dupli > 0){
        len++;
        num_dupli /=2;
    }
    while(num > 0){
        a[i] = num%2;
        i++;
        num /= 2;
    }
    for(i=len-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}