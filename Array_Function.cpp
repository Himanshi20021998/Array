#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Present: true
// Absent: false

bool linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            // Found
            return true;
        }
    }
    // Not Found
    return false;
}

int main(){
    int arr[5]={4,5,6,2,8};
    int size=5;
    int target=18;
    printArray(arr, size);
    bool ans=linearSearch(arr, size, target);
    if(ans==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;
}