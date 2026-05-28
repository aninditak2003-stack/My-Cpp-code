#include<iostream>
using namespace std;
int log(int a, int b){
    if( b==0) return 1;
    if(b==1) return a;
    int s = log(a, b/2);
    
    if(b%2==0){
        return s*s;
    }
    if(b%2!=0){
        return a*s*s;
    }
}
    int main(){
        int a;
        cout<<"Enter base:";
        cin>>a;
        int b;
        cout<<"Enter power:";
        cin>>b;
        cout<<log(a,b);
    }
