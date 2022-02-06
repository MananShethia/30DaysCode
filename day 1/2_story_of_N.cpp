#include<iostream>
using namespace std;

int main(){
    int index, temp_index = 1, sum = 0, first_eleven = 29, temp_eleven;
    cin>>index;
    while(temp_index != index){
        sum = 0;
        first_eleven += 9;
        temp_eleven = first_eleven;
        while(temp_eleven > 0){
            sum += (temp_eleven % 10);
            temp_eleven /= 10;
        }
        if(sum == 11){
            temp_index++;
        }
    }
    cout<<first_eleven;
    return 0;
}