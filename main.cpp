#include <iostream>
#include <string>
using namespace std;

int square(int x) {
    return x * x;
}

string concat(string a, string b, string c) {
    return a + b + c;
}

int main() {
    cout << square(5) << endl;
    string res = concat("Hello, ", "world", "!");
    cout << res << endl;

    return 0;
}