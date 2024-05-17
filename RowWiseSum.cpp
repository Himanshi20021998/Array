#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0; j<row; j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void diagonalSum(int arr[][4], int row, int col){
    int sum=0;
    for(int i=0; i<row; i++){
        sum=sum+arr[i][i];
    }
    cout<<sum<<endl;
}

int main(){
    int arr[][4]={
        {1,4,5,7},
        {2,5,1,12},
        {2,7,9,11},
        {2,4,5,9}
    };
    int row=4, col=4;
    rowWiseSum(arr, row, col);
    cout<<endl;
    colWiseSum(arr, row, col);
    cout<<endl;
    diagonalSum(arr, row, col);
    return 0;
}