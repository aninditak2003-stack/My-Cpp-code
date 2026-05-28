#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i; j++){            
            cout<<" ";

        }
        for(int j =1; j<=(2*i)-1; j++){
            // if(i==n|| j==1||((i+j)==((2*n)-2)) || ((i+j)==((2*n)+1)))
            // if(i==n || j==1 || j==3||j==5)
            if(i==n|| j==1|| j==(2*i)-1)
            cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}