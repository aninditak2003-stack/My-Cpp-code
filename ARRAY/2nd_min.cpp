#include<iostream>
using namespace std;
int main(){
    int arr[5]={1, 2, 4, 9, 10};
    int mmin = INT16_MAX;
    for(int i=0; i<5; i++){
        mmin=min(mmin, arr[i]);
    }
    int smmin= INT16_MAX;
    for(int i=0; i<5; i++){
        if(mmin!=arr[i]){
            smmin=min(smmin,arr[i]);
        }
    }
    cout<<smmin;
}