#include <iostream>
using namespace std;

int main() {
    int a[2][2];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> a[i][j];

    cout << "Transpose Matrix:\n";
    for(int j=0;j<2;j++) {
        for(int i=0;i<2;i++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}