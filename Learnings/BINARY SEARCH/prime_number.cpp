// #include<iostream>
// using namespace std;

// bool checkPrime(int n){
//     if(n==0 || n==1)return false;
//     for(int i=2;i<=n-1;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     bool ans = checkPrime(n);
//     if(ans == true) cout<<"Number is prime";
//     else cout << "Number is not prime";
// }


#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n==0 || n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool ans = checkPrime(n);
    if(ans == true) cout<<"Number is prime";
    else cout << "Number is not prime";
}