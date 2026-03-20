//РОБОТА З ФАЙЛАМИ
//================
//
//Завдання:
//
//Дано текстовий файл.Необхідно створити новий файл, прибравши з нього всі неприйнятні слова.
//Список неприйнятних слів знаходиться в іншому файлі.
//Розподіл файлу на частини, зробіть окремий репозиторій

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream text("text.txt");
    ifstream bad("bad.txt");
    ofstream clean("clean.txt");

    if (!text || !bad) {
        cout << "File error";
        return 0;
    }

    string badWords[100];
    int n = 0;

    while (bad >> badWords[n]) n++;

    string word;

    while (text >> word) {
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (word == badWords[i]) {
                ok = false;
                break;
            }
        }

        if (ok) clean << word << " ";
    }

    text.close();
    bad.close();
    clean.close();

    cout << "Done";
    return 0;
}