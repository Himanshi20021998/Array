#include<iostream>
using namespace std;

void transpose(int arr[][4], int row, int col){
    cout<<"Matrix:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout<<"Transpose of Matrix:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][4]={
        {1,4,5,7},
        {2,5,1,12},
        {2,7,9,11},
        {2,4,5,9}
    };
    int row=4, col=4;
    transpose(arr, row, col);
    return 0;
}