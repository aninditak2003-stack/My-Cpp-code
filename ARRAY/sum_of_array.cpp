#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int arr[3]={2,4, 7};
    for(int i =0; i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i =0; i<=2; i++){
        sum= sum+arr[i];
    }
    cout<<sum;
}