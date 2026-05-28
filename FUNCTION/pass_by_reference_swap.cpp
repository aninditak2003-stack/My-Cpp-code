#include<iostream>
using namespace std;
void swap (int &x, int &y){
    int temp =x;
    x=y;
    y=temp;
}
int main(){
    int x; 
    cout<<"Enter x:";
    cin>>x;
    int y ;
    cout<<"Enter y:";
    cin>>y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}