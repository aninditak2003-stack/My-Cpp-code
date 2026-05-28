#include<iostream>
using namespace std;
int main(){
   int arr[5];
   cout<<"Enter array element:";
    for(int i =0; i<=4; i++){
        cin>>arr[i];
    }
    cout<<"To get double of the element:";
    for(int i =0; i<=4; i++){
        cout<<arr[i]*2<<" ";
    }
}