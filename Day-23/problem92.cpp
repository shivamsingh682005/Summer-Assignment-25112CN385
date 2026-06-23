#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for(char ch : s)
        mp[ch]++;

    char ans;
    int maxi = 0;

    for(auto x : mp) {
        if(x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }

    cout << ans;

    return 0;
}