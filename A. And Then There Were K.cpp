#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int c = 0;

    while(n>0){
        n>>=1;
        c++;
    }
    int ans = (1<<(c-1))-1;

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}