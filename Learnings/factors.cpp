#include<iostream>
using namespace std;

void printFactor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
            if(i!=(n/i)){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    printFactor(n);
}



// #include<iostream>
// using namespace std;

// void printFactor(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     printFactor(n);
// }   