#include<iostream>
using namespace std;

void fun(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    // Static Memory Allocation of Array
    // int arr[5]={1,2,3,4,5};

    // Dynamic Memory Allocation of Array
    int n;
    cin>>n;
    int *arr=new int[n]; // Each element would be garbage or zero

    // Taking n elements inputs and inserting in array
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        arr[i]=data;
    }  // 0 to 4 index

    // let try to insert more items
    // arr[n]=80;

    for(int i=0; i<10; i++){
        arr[n+i]=80;
    } // 5 to 10 index

    fun(arr, n);
    return 0;
}