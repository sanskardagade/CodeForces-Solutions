#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int lowerBound(vector<int> &nums,int n,int target){
    int l = 0;
    int r = nums.size() - 1;
    int ans = nums.size();
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]>=target){
            ans = min(ans,mid);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}


int upperBound(vector<int> &nums,int n,int target){
    int l = 0;
    int r = nums.size() - 1;
    int ans = nums.size();
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]>target){
            ans = min(ans,mid);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}


int main(){

}