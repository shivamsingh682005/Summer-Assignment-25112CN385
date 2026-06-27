#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "Quiz Started!\n\n";

    cout << "Q1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n";
    cin >> answer;
    if (answer == 1)
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 12\n3. 15\n";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "1. Programming Language\n2. Browser\n3. Operating System\n";
    cin >> answer;
    if (answer == 1)
        score++;

    cout << "\nYour Score = " << score << " / 3";

    return 0;
}