#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    set<int> st;
    int x;

    cout << "Enter elements: ";
    for(int i = 0; i < n1; i++) {
        cin >> x;
        st.insert(x);
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements: ";
    for(int i = 0; i < n2; i++) {
        cin >> x;
        st.insert(x);
    }

    cout << "Union: ";
    for(int num : st)
        cout << num << " ";

    return 0;
}