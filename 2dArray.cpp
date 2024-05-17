#include<iostream>
using namespace std;

void printArray(int arr[3][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // Creating 2D Array
    int arr[3][3];
    int row=3, col=3;
    for(int i=0; i<row; i++){
        for(int  j=0; j<col; j++){
            cout<<"Enter the input for row index "<<i<<" and column index "<<j<<": "<<endl;
            cin>>arr[i][j];
        }
    }
    printArray(arr, row, col);

    // Initialize
    // int arr1[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // int arr2[][4]={ // Atlest have to tell column size
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // Printing Array
    // int row=3;
    // int col=4;
    // printArray(arr1, row, col);

    return 0;
}