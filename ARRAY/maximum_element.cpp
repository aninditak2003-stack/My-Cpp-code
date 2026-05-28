#include<iostream>
using namespace std;
int main(){
    int arr[]={2, 4, 6, 23, 5, 0, 2, 12, 55, 7, 11, 0};
    int n = sizeof(arr)/4;
    int max = arr[0];
    for(int i =0; i<=n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;

}