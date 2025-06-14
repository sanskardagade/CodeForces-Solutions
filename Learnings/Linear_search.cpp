#include<iostream>
#include<vector>
using namespace std;

int linear_search(int n,vector<int>arr,int tar){
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            return i;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int tar;
    cin>>tar;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<linear_search(n,v,tar);
}