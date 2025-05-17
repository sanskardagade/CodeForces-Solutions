#include <iostream>
#include <string>
using namespace std;
int main() {
    string tableCard;
    cin >> tableCard;
    string handCard;
    for (int i = 0; i < 5; i++) {
        cin >> handCard;
        if (handCard[0] == tableCard[0] || handCard[1] == tableCard[1]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}