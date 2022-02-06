#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f * i;
    }
    return f;
}

int main(){
    int num, n, n_temp, sum = 0;
    cin>>num;
    n = num;
    while(n>0){
        n_temp = n%10;
        sum += fact(n%10);
        n /= 10;
    }
    if(num == sum)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}