#include<iostream>
using namespace std;

void solve(int& a){
    a++;
    cout<<a<<endl;
}

int main(){
    int a=5;
    solve(a);
    cout<<a<<endl;

    int c=50;
    cout<<c<<endl;
    int& b = c;
    cout<<b<<endl;
    return 0;
}