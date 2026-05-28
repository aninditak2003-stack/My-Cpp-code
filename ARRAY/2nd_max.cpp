#include<iostream>
using namespace std;
int main(){
    int arr[5]={1, 2, 4, 9, 10};
    int mx = INT16_MIN;
    for(int i=0; i<5; i++){
        mx=max(mx, arr[i]);
    }
    int smx= INT16_MIN;
    for(int i=0; i<5; i++){
        if(mx !=arr[i]){
            smx=max(smx,arr[i]);
        }
    }
    cout<<smx;
}