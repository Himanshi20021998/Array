#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    // int size=v.size();
    // for(int i=0; i<size; i++){
    //    1. cout<<v[i]<<" ";
    //    2. cout<<v.at(i)<<" ";
    // }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    // vector initialization
    vector<int>v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // print(v);
    cout<<v.size();

    // vector<char>v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    
    // cout<<"First Element: "<<v[0]<<endl;
    // cout<<"First Element: "<<v.front()<<endl;
    // cout<<"Last Element: "<<v[v.size()-1]<<endl;
    // cout<<"Last Element: "<<v.back()<<endl;

    // vector<int>arr; // default with no data and 0 size

    // vector<int>arr2(5, -1); // init with n size with specific data
    // arr2.push_back(50);
    // print(arr2);

    // vector<int>arr3={1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    // vector<int>arr4{1,2,3,4,5};
    // arr4.pop_back();
    // print(arr4);

    // How to copy vector
    // vector<int>arr5={1,2,3,4,5};
    // vector<int>arr6(arr5);
    // print(arr6);

    // In vector, don't tell size of vector.
    // Just keep inserting, I will manage the allocation
    // vector<int>v; // Array

    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }

    // for(int i=0; i<10; i++){
    //     v.push_back(80);
    // }

    // print(v);

    // clear whole vector
    // v.clear();
    // v.push_back(50);
    // print(v);

    // v.pop_back();
    // print(v);

    // while(1){  
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity: "<<v.    capacity()<<" size: "<<v.size();
    //     cout<<endl;
    // }

    // insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // print(v);

    // pop-->delete-->END
    // 1 2 3

    // v.pop_back(); // 3
    // print(v);

    // v.pop_back(); // 2
    // print(v);

    // v.pop_back(); // 1
    // print(v);

    // v.pop_back();
    // print(v);
    return 0;
}