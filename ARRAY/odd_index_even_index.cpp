#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    for(int i =0; i<n; i++){
        if(i%2==0){
            cout<<arr[i]+10<<" ";
        }
        else{
           cout<<arr[i]*2<<" ";
        }
    }
}