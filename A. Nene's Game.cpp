#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int k,q;
    cin>>k>>q;

    vector<int>arr(k);
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }

    while(q--){
        int n;
        cin>>n;
        cout<<min(arr[0]-1,n)<<endl;
    }
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}