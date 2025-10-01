//использование строки и переменных
#include <iostream>
#include <string>

using namespace std;
int main() {
    // переменная  имени пользователя
    string name;
    //запрашиваем имя в строке, происходит ввод имени
    cout << "Ваше имя: ";
    cin >> name;
    // возращаем имя пользователя и вставляем между имя с воскл. знаком
    cout << "Salam Alleikum," << name << "!" << endl;
    // возращаем значение
    return 0;
       
}