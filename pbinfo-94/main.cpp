#include <bits/stdc++.h>
using namespace std;
int main() {
    string text; cin >> text;
    for (int i = text.length() - 1; i >= 0; i--)
        if (string("aeiou").find(text[i]) != string :: npos) text.erase(i, 1);
        cout << text;
    return 0;
}