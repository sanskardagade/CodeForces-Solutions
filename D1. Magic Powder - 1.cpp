#include<iostream>
#include<vector>
using namespace std;

bool check(int n,int k,vector<int>&a,vector<int>&b,int mid){
    for(int i=0;i<n;i++){
        int required = a[i] * mid;
        required -= b[i];
        if(required>0){
            if(k>=required){
                k-=required;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int low = 0;
    int high = 5000;
    int ans = 0;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        if(check(n,k,a,b,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
}