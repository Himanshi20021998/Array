#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n=5;

    // taking input in an array
    for(int i=0; i<n; i++){
        cout<<"Enter the value of index "<<i<<": "<<endl;
        cin>>arr[i];
    }

    // Printing the Array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}