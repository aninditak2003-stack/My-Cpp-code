#include<iostream>
using namespace std;
void change(int brr[]){
    brr[0]=12;
}
int main(){
    int arr[4]={3, 1, 4, 6};
    for(int i =0; i<=3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     change(arr);
    for(int i=0; i<=3; i++){
        cout<<arr[i]<<" ";
    }

}