#include <iostream>
using namespace std;

    void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern4(n);
    return 0;
}