//sieve algorithm --> used to find all the prime numbers in a given range 
//time complexity = O(n log2log2 n)

// #include<iostream>
// using namespace std;

// bool checkPrime(int n){
//     if(n==0 || n==1) return false;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }


// int main(){
//     //print prime numbers till n 
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(checkPrime(i)){
//             cout<<i<<" "; 
//         }
//     }

// }




#include<iostream>
#include<vector>
using namespace std;

vector<bool>sieve(int n){
    vector<bool>primes(n+1,true);
    primes[0] = false;
    primes[1] = false;
    
    for(int i=2;i*i<=n;i++){
        if(primes[i]==true){
            for(int j=i*2;j<=n;j+=i){
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main(){
    int n;
    cin>>n;
    vector<bool>primes = sieve(n);
    for(int i=1;i<=n;i++){
        if(primes[i]) cout<<i<<" is a prime number \n";
        else cout<<i<<" is not a prime number \n";
    }
}