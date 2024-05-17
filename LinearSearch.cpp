#include<iostream>
using namespace std;

int main(){
    int a[4]={4, 8, 12, 2};
    int n=4, i;
    int key=12;
    for(i=0; i<n; i++){
        // i==(n-1)
        if(a[i]==key){
            cout<<"Key found at index "<<i;
            break; // stop the loop
        }
    }
    // Two ways to exit loop
    // 1. When i==n, loop terminates
    // 2. Break statement gets executed, i can never be equals to (n-1)
    if(i==n){
        cout<<"Key is not present!";
    }
    return 0;
}