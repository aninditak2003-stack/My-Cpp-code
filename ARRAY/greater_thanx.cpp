#include<iostream>
using namespace std;
int main(){
    int x=12;
    int count =0;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array is:"<<" ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<endl;
    
    cout<<"count is:"<<count;


}