#include<iostream>
using namespace std;

int main(){
    int num, len = 0;
    cin>>num;
    while(num > 0){
        len++;
        num /= 10;
    }
    if(len%2 == 0)
        cout<<"Even";
    else
        cout<<"Odd";
    return 0;
}