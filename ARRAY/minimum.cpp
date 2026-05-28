#include<iostream>
#include<limits>
using namespace std;
int main(){
    int arr[]={11,4, 80, 9, 34};
    int n =sizeof(arr)/4;
    int mx= INT32_MAX;
    for(int i=0;i<n; i++){
        mx= min(mx,arr[i]);
    }
    cout<<mx;
}