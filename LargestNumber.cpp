#include<iostream>
#include<climits> // for INT_MAX and INT_MIN
using namespace std;

int main(){
    int a[]={1, 6, 5, 7, 0};
    int m=5;
    int mx=INT16_MIN; // INT_MIN=-2^31
    for(int i=0; i<m; i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<"Largest No. is "<<mx<<endl;
    return 0;
}