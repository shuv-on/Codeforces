#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool found = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            cout << "YES\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "NO\n";
    }

    return 0;
}
