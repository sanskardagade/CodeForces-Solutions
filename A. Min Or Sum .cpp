#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x = 0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        x|=y;
    }
    cout<<x<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}