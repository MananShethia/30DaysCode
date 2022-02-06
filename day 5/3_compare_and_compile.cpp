#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num, square, square_sum = 0, i = 0, len = 0;
    cin>>num;
    square = num * num;
    int num_dup = num;
    while(num_dup > 0){
        len++;
        num_dup /= 10;
    }
    while(square > 0 && i < len){
        square_sum += (square%10 * pow(10,i));
        i++;
        square /= 10;
    }

    if(num == square_sum)
        cout<<"Phoenix number";
    else
        cout<<"Not a phoenix number.";

    return 0;
}