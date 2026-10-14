#include <iostream>
#include <string>
using namespace std;

// Функция, которая вычисляет квадрат числа
int square(int x) {
    return x * x;
}

// Функция, которая вычисляет куб числа
int cube(int x) {
    return x * x * x;
}

// Функция, которая склеивает три строки в одну
string concat(string a, string b, string c) {
    return a + b + c;
}

int main() {
    cout << "Квадрат 5 = " << square(5) << endl;
    cout << "Куб 5 = " << cube(5) << endl;
    cout << "Склейка: " << concat("Hello, ", "world", "!") << endl;
    return 0;
}