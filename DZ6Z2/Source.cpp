#include <iostream>
#include <string>
using namespace std;

// Функция для переворота строки
string reverse_string(string str) {
    string reversed = "";
    for (int i = str.length(); i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    setlocale(LC_ALL, "Rus");

    string input;

    cout << "Введите строку: ";

    getline(cin, input);

    cout << "Перевернутая строка: " << reverse_string(input) << endl;

    return 0;
}