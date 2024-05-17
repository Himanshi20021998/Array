#include<iostream>
using namespace std;

bool findTarget(int arr[3][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; i<col; j++){
            if(arr[i][j]==target){
                // If found, return ture
                return true;
            }
        }
    }
    // After checking all elements and target nor found, return false
    return false;
}

int main(){
    int arr[3][4]={
        {1,4,5,7},
        {2,5,7,2},
        {2,7,9,1}
    };
    int row=3, col=4;
    int target=11;
    bool result=findTarget(arr, row, col, target);
    cout<<result;
    return 0;
}