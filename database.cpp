#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Обьявление переменных
string name;
string dir;
int lines = 0;

// Функция для считывания txt файла
int databaseCheck(){
    string line;
    std::ifstream in("Projects.txt");
    if (in.is_open()){
        while (std::getline(in, line)){
            lines++;
            cout << line << endl;
        }
    }
    in.close();
    return 0;
}

//Функция для записи в файл
//Не работает
void databaseWrite(){
    cout << "Введите название проекта: ";
    cin >> name;
    cout << "Введите путь до проекта: ";
    cin >> dir;
    ofstream out("Projects.txt", std::ios::app);
    if (out.is_open()){
        out << lines++ << " | " << name << " | "<< dir << endl;
    }
    out.close();
    //Реализация
}
