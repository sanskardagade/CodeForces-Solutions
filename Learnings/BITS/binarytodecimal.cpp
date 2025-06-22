#include<iostream>
#include<string>
using namespace std;

int binarytodecimal(string binary){
    int n = binary.size();
    int p = 1;
    int decimal = 0;

    for(int i=n-1;i>=0;i--){
        if(binary[i] == '1'){
            decimal += p;
        }
        p *= 2;
    }
}

int main(){
    string binary;
    getline(cin, binary);
    cout<<binarytodecimal(binary);
}