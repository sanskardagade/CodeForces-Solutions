//  https://cses.fi/problemset/task/1141/

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<long long,long long>mp;
    int i=0,j=0;
    int ans = 1;
    
    mp[v[0]]++;

    while(j<(n-1)){
        j++;
        while(mp[v[j]] > 0){
            mp[v[i]]--;
            i++;
        }
        mp[v[j]]++;
        ans = max(ans,j-i+1);
    }
    cout<<ans<<endl;
}   