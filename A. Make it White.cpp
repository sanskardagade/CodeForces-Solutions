#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

void solve(){
    int n ;
    cin>>n;

    string s;
    cin>>s;

    int i = 0;
    int j = n-1;


    while (i<n && s[i]=='W')i++;
    if(i==n){
        cout<<"0"<<endl;
    }

    while(j>=0 && s[j]=='W')j--;

    cout<<(j-i+1)<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}