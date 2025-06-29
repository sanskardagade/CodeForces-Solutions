#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int i = 0;
    int ans = 0;

    while(i<n){
        if(i+5<=n && s.substr(i,5)=="mapie"){
            i += 5;
            ans++;
        }
        else if(i+3<=n && s.substr(i,3)=="map"){
            i += 3;
            ans++;
        }
        else if(i+3<=n && s.substr(i,3)=="pie"){
            i += 3;
            ans++;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}