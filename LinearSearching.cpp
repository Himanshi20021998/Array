#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,4,6,8,10};
    int target=11;
    int n=5;
    bool flag=0;
    // 0: Not Found
    // 1: Found

    for(int i=0; i<n; i++){
        if(arr[i]==target){
            // Found
            flag=1;
            break;
        }
    }
    
    if(flag==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}