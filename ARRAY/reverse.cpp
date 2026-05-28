#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Array elements are:"<<endl;
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}