#include<iostream>
using namespace std;
int main(){
    int x =3;
//pointers store the address of the variable    
    int* p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}