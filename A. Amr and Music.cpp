#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        v.push_back({arr[i],i+1});
    }

    sort(v.begin(),v.end());

    vector<int>indices;

    for(int i=0;i<n;i++){
        if(v[i].first <= k){
            indices.push_back(v[i].second);
            k -= v[i].first;
        }
        else break;
    }

    cout<<indices.size()<<endl;
    for(int i=0;i<indices.size();i++){
        cout<<indices[i]<<" ";
    }
    cout<<endl;
}


