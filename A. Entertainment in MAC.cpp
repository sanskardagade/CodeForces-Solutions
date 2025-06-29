#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

void solve(){
    long n;
    cin>>n;

    string s;
    cin>>s;

    string ans;

    string rev = s;
    reverse(rev.begin(),rev.end());


    if(n%2==0){
        if(s<=rev)ans = s;
        else ans = rev + s;
    }
    else{
        if(rev<=s) ans = rev;
        else ans = s + rev;
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