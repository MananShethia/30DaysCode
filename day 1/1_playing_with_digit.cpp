#include<iostream>
using namespace std;

int main(){
    int num_digit, num, sum = 0, mul = 1;
    cin>>num_digit;
    cin>>num;
    while(num_digit > 0){
        sum = sum + (num % 10);
        mul = mul * (num % 10);
        num /= 10;
        num_digit -= 1;
    }
    cout<<mul - sum;
    return 0;
}