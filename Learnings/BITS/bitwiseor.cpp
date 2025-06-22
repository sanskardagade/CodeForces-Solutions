#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"BITWISE OR "<<(a|b|c)<<endl;
    cout<<"BITWISE AND "<<(a&b&c)<<endl;
    cout<<"BITWISE XOR "<<(a^b^c)<<endl;


    int x = 22;
    x = ~x;
    cout<<"NOT of x is "<< x << "\n";

    int y = 22;
    cout<<"LEFT SHIFT "<< (y<<2) << "\n";
    cout<<"RIGHT SHIFT "<< (y>>12) << "\n";
}