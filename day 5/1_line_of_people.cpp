#include<iostream>
using namespace std;

int main(){
    int n , a, b;
    cin>>n>>a>>b;
    if(b < n-a){
        cout<<b+1;
    }
    else{
        cout<<n-a;
    }
    return 0;
}