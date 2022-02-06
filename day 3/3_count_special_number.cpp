#include<iostream>
using namespace std;

void count(int nk, int input[], int floorNK){
    int seen[nk], total_cnt = 0;
    for(int i=0;i<nk;i++){
        seen[i]= 0;
    }
    for(int i = 0; i < nk; i++) {
        if(seen[i] == 0) {
            int count = 0;
            for(int j = i; j < nk; j++)
                if(input[j] == input[i]) {
                    count += 1;
                    seen[j] = 1;
                }
            if(floorNK == count)
                total_cnt++;
        }
    }
    cout<<total_cnt;
}

int main(){
    int nk[2], i, floorNK;
    for(i=0;i<2;i++){
        cin>>nk[i];
    }
    int input[nk[0]];
    for(i=0;i<nk[0];i++){
        cin>>input[i];
    }
    floorNK = nk[0]/nk[1];
    count(nk[0], input, floorNK);
    return 0;
}