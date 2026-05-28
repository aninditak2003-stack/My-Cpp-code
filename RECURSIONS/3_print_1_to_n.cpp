#include<iostream>
using namespace std;
void print(int x, int n){
    cout<<x<<endl;
    if(x>=n){
        return;
    }
    print(x+1, n);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    print(1, n);
}