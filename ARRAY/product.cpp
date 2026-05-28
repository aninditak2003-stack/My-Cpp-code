#include<iostream>
using namespace std;
int main(){
    int arr[3]={3, 5, 1};
    for(int i =0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int product =1;
    for(int i =0; i<=2; i++){
    product = product*arr[i];
    }
    cout<<product;
}