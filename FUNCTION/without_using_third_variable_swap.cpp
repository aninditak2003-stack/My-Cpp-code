#include<iostream>
using namespace std;
int main(){
    int a; 
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    
    a = a+b;
    b=a-b;
    a= a-b;
    cout<<a<<" "<<b<<endl;
}