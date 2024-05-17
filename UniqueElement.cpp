#include<iostream>
using namespace std;

int getUnique(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={2, 10, 8, 2, 9, 8, 11, 9, 10};
    int n=9;

    int finalAns=getUnique(arr, n);
    cout<<finalAns;
    return 0;
}