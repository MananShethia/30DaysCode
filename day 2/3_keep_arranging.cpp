#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int hn;
    float sum = 1, i;
    cin>> hn;
    for(i=2;i<=hn;i++){
        sum = sum + (1/i);
    }
    cout<<"Harmonic sum upto 4 decimal places: "<<fixed<<setprecision(4)<<sum;
    return 0;
}