#include<iostream>
using namespace std;

int main(){
    int num, n, last_digit, i, a[10], flag = 0;
    cin >> num;
    n = num;
    while(n > 0){
        last_digit = n%10;
        a[last_digit] = 0;
        n /= 10;
    }
    while(num > 0){
        last_digit = num % 10;
        if(a[last_digit] == 0){
            a[last_digit]++;
        }
        else{
            flag = 1;
            break;
        }
        i++;
        num /= 10;
    }
    if(flag == 1){
        cout<<"The number is unlucky.";
    }
    else{
        cout<<"The number is lucky.";
    }
    return 0;
}