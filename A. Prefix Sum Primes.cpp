/*
We're giving away nice huge bags containing number tiles! A bag we want to present to you contains n tiles. Each of them has a single number written on it — either 1 or 2.

However, there is one condition you must fulfill in order to receive the prize. You will need to put all the tiles from the bag in a sequence, in any order you wish. We will then compute the sums of all prefixes in the sequence, and then count how many of these sums are prime numbers. If you want to keep the prize, you will need to maximize the number of primes you get.

Can you win the prize? Hurry up, the bags are waiting!

Input
The first line of the input contains a single integer n (1≤n≤200000) — the number of number tiles in the bag. The following line contains n space-separated integers a1,a2,…,an(ai∈{1,2}) — the values written on the tiles.

Output
Output a permutation b1,b2,…,bn of the input sequence (a1,a2,…,an) maximizing the number of the prefix sums being prime numbers. If there are multiple optimal permutations, output any.

Examples
InputCopy
5
1 2 1 2 1
OutputCopy
1 1 1 2 2

InputCopy
9
1 1 2 1 1 1 2 1 1
OutputCopy
1 1 1 2 1 1 1 2 1
Note
The first solution produces the prefix sums 1,2,3,5,7(four primes constructed), while the prefix sums in the second solution are 1,2,3,5,6,7,8,10,11 (five primes). Primes are marked bold and blue. In each of these cases, the number of produced primes is maximum possible.
*/



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ones=0,twos=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)ones++;
        else twos++;
    }
    if(twos==0){
        //no twos present
        for(int i=0;i<ones;i++)cout<<"1 ";
    }
    else if(ones==0){
        //no ones present
        for(int i=0;i<twos;i++)cout<<"2  ";
    }
    else{
        cout<<"2 1 ";
        for(int i=0;i<twos-1;i++)cout<<"2 ";
        for(int i=0;i<ones-1;i++)cout<<"1 ";
    }
    return 0;
}