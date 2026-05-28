#include<iostream>
using namespace std;
int main(){
    int sum[2][3]={1};
    cout<<"1st matrix is:"<<endl;
    int mat1[2][3]={1, 2, 3, 4, 5, 6};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second matrix is:"<<endl;
    int mat2[2][3] = {2, 1, 0, 7, 3, 5};
    for(int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<"sum is:"<<endl;
        for(int i =0; i<2;i++){
            for(int j =0; j<3; j++){
                cout<<mat1[i][j]+mat2[i][j]<<" ";
            }
            cout<<endl;
        }
    }


