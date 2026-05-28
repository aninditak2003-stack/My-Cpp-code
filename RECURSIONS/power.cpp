#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0){
        return 1 ;
    }
    else{
        return x*power(x ,y-1);
    }
}
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    power(a,b);
    cout<<power(a,b);
}