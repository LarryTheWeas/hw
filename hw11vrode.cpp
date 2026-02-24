//ЗАВДАННЯ:
//
////№1
////Напишіть програму, яка визначає, чи є заданий РЯДОК коректним IP - адресом чи ні.
#include <iostream>
#include <string>
using namespace std;

//bool ValidIp(string ip)
//{
//    int parts = 0;
//    string num = "";
//
//    for (int i = 0; i <= ip.size(); i++)
//    {
//        if (ip[i] == '.' || i == ip.size())
//        {
//            if (num.empty()) return false;
//
//            int val = stoi(num);
//            if (val < 0 || val > 255) return false;
//
//            parts++;
//            num = "";
//        }
//        else if (!isdigit(ip[i]))
//            return false;
//        else
//            num += ip[i];
//    }
//    return parts == 4;
//}
//
//int main()
//{
//    string ip;
//    cout << "Enter IP address ";
//    getline(cin, ip);
//
//    cout << (ValidIp(ip) ? "Valid IP" : "Invalid IP");
//}
////№2
////Написати програму, яка дає користувачеві ввести 5 прізвищ студентів,
////а потім сортує їх за спаданням.
//int main()
//{
//    string s[5];
//
//    cout << "Enter 5 surnames:\n";
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "Surname " << i + 1 << ": ";
//        getline(cin, s[i]);
//    }
//
//    for (int i = 0; i < 4; i++)
//        for (int j = i + 1; j < 5; j++)
//            if (s[i] < s[j])
//                swap(s[i], s[j]);
//
//    cout << "\nSorted:\n";
//    for (int i = 0; i < 5; i++)
//        cout << s[i] << endl;
//}
////№3
////Користувач вводить рядок і шуканий символ.Порахувати скільки разів він зустрічається в рядку.
//int main()
//{
//    char txt[100];
//    char ch;
//
//    cout << "Enter text ";
//    cin.getline(txt, 100);
//
//    cout << "Enter symbol ";
//    cin >> ch;
//
//    int count = 0;
//    for (int i = 0; txt[i] != '\0'; i++)
//        if (txt[i] == ch) count++;
//
//    cout << "Count = " << count;
//}
////№4
////Знайти у рядку який введе користувач найдовше слово
//int main()
//{
//    string txt, word, maxWord;
//
//    cout << "Enter sentence ";
//    getline(cin, txt);
//
//    for (int i = 0; i <= txt.size(); i++)
//    {
//        if (txt[i] == ' ' || i == txt.size())
//        {
//            if (word.size() > maxWord.size())
//                maxWord = word;
//            word = "";
//        }
//        else
//            word += txt[i];
//    }
//
//    cout << "Longest word " << maxWord;
//}
////№5
////Знайдіть і замініть входження певного слова на задане користувачем слово
//int main()
//{
//    string txt, oldW, newW;
//
//    cout << "Enter text ";
//    getline(cin, txt);
//
//    cout << "Word to replace ";
//    getline(cin, oldW);
//
//    cout << "New word ";
//    getline(cin, newW);
//
//    size_t pos = 0;
//
//    while ((pos = txt.find(oldW, pos)) != string::npos)
//    {
//        txt.replace(pos, oldW.length(), newW);
//        pos += newW.length();
//    }
//
//    cout << txt;
//}
////№6
////Дано рядок.Необхідно перевірити чи є цей рядок паліндромом.
//int main()
//{
//    char txt[100];
//
//    cout << "Enter text: ";
//    cin.getline(txt, 100);
//
//    int len = strlen(txt);
//    bool pal = true;
//
//    for (int i = 0; i < len / 2; i++)
//        if (txt[i] != txt[len - 1 - i])
//            pal = false;
//
//    cout << (pal ? "Palindrom" : "Not palindrom");
//}