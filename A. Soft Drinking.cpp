#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;
    int toast_from_drink = total_drink / nl;
    int toast_from_limes = total_slices;
    int toast_from_salt = total_salt / np;
    int total_toasts = min({toast_from_drink, toast_from_limes, toast_from_salt});
    cout << total_toasts / n << endl;
    return 0;
}