#include<iostream>
#include<vector>
using namespace std;

int binary_search(int n,vector<int>arr,int target){
    
    int left = 0;
    int right = n - 1;
    

    while(left<right){
        int mid =(left+right)/2;
        if(target == arr[mid]) return mid;
        else if (target > arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    cout<<binary_search(n,arr,target);

}