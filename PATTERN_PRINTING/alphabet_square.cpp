#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows:";
    cin>>m;
    int n;
    char ch;
    cout<<"Enter columns:";
    cin>>n;
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
}
