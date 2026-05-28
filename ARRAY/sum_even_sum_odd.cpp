#include<iostream>
using namespace std;
int main(){
    int n;
    int sum_even=0;
    int sum_odd = 0;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter elements of the array:";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    cout<<endl;

    cout<<"sum of even indices is = "<<sum_even<<endl;
    cout<<"sum of odd indices is = "<<sum_odd<<endl;
    int diff = (sum_even)-(sum_odd);
    cout<<diff;

}
