#include<iostream>
using namespace std;
int facto(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f= f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    int a = facto(n);
    int b= facto(r);
    int c= facto(n-r);
    cout<<(a/(b*c));
    return 0;
}