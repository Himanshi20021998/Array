#include<iostream>
#include<limits>
using namespace std;

int findMinNumber(int arr[], int size){
    int minAns=INT16_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    int arr[]={10, 8, 2, 5, 7, 21, 1};
    int size=7;
    int minimum=findMinNumber(arr, size);
    cout<<"Minimum number is "<<minimum<<endl;
    return 0;
}