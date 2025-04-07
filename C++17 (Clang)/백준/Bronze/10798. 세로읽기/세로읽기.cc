#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (j < arr[i].length()) {
                cout << arr[i][j];
            }
        }
    }

    return 0;
}
