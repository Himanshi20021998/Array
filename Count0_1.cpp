#include<iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int zeroCount=0;
    int oneCount=0;

    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }

    cout<<"Zeroes: "<<zeroCount<<endl;
    cout<<"Ones: "<<oneCount<<endl;
}

int main(){
    int arr[15]={0,0,1,0,1,1,0,1,0,1,0,1,1,0,0};
    int size=15;
    // Zeroes = 8
    // Ones = 7
    countZeroOne(arr, size);
    return 0;
}