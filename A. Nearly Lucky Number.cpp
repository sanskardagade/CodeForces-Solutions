#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int n) {
    string str = to_string(n);
    for (char ch : str) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int countLucky = 0;
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            countLucky++;
        }
    }

    if (isLucky(countLucky)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
