#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:";
    for(int i =0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array is:";
    for(int i=0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    int i=0;
    int j =n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
           j--;
        } 
        else{
          cout<<endl;
              cout<<"not palindrome:"; 
              return 0;  
        }
    }   
    cout<<endl;
    cout<<"palindrome";
    
}