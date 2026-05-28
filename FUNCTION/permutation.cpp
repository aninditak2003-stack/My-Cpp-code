#include<iostream>
using namespace std;
int permu(int x){
    int p = 1;
    for(int i=1; i<=x; i++){
        p = p*i;
    }
    return p;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    int a = permu(n);
    int b = permu(n-r);
    int c= (a/b);
    cout<<c;
}