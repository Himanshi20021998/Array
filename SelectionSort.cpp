#include<iostream>
using namespace std;

int main(){
    int a[]={5, 3, 4, 2, 1};
    int n=5; // sizeof(a)/sizeof(int);
    // Before Algorithm
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<=(n-2); i++){
        int min=1;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i], a[min]);
    }
    // After Algorithm
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}