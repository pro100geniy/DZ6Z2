#include <iostream>
#include <string>
using namespace std;

// ������� ��� ���������� ������
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

    cout << "������� ������: ";

    getline(cin, input);

    cout << "������������ ������: " << reverse_string(input) << endl;

    return 0;
}