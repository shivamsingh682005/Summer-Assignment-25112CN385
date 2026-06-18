#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    set<int> s1;
    int x;

    cout << "Enter elements: ";
    for(int i = 0; i < n1; i++) {
        cin >> x;
        s1.insert(x);
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Common Elements: ";

    for(int i = 0; i < n2; i++) {
        cin >> x;

        if(s1.count(x))
            cout << x << " ";
    }

    return 0;
}