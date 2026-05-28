#include<iostream>
using namespace std;
void greet(){
    cout<<"Hey!"<<endl;
    //caling greet function again and again
    greet();
}
int main(){
    greet();
}