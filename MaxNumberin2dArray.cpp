#include<iostream>
using namespace std;

int findMax(int arr[][4], int row, int col){
    int maxAns=INT16_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][4], int row, int col){
    int minAns=INT16_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }
    }
    return minAns;
}

int main(){
    int arr[3][4]={
        {1,4,5,7},
        {2,5,17,12},
        {20,77,9,11}
    };
    int row=3, col=4;

    cout<<"Maximum number: "<<findMax(arr, row, col)<<endl;
    cout<<"Minimum number: "<<findMin(arr, row, col)<<endl;
    return 0;
}