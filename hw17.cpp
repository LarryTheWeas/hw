//РОБОТА З ФАЙЛАМИ
//================
//
//№1
//Напишіть програму, яка відкриває файл, аналізує його вміст і створює звіт,
//у якому вказується кількість рядків, слів та виводить інформацію у консоль

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main() {
//    ifstream file("input.txt");
//
//    if (!file) {
//        cout << "File error";
//        return 0;
//    }
//
//    string line, word;
//    int lines = 0, words = 0;
//
//    while (getline(file, line)) {
//        lines++;
//        int inWord = 0;
//        for (char c : line) {
//            if (c != ' ' && c != '\t' && c != '\n') {
//                if (!inWord) {
//                    words++;
//                    inWord = 1;
//                }
//            }
//            else {
//                inWord = 0;
//            }
//        }
//    }
//
//    cout << "Lines: " << lines << endl;
//    cout << "Words: " << words << endl;
//
//    file.close();
//    return 0;
//}
//№2
//На вхід програмі подається рядок з іменем текстового файлу.
//Напишіть програму, яка виводить на екран його вміст.

int main() {
    string name;
    cin >> name;

    ifstream file(name);

    if (!file) {
        cout << "File error";
        return 0;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
