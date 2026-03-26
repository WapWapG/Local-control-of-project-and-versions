#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Обьявление переменных
string name;
string dir;
string line;

// Функция для считывания txt файла
int databaseCheck(){
    std::ifstream in("Projects.txt");
    if (in.is_open()){
        while (std::getline(in, line)){
            cout << line << endl;
        }
    }
    in.close();
    return 0;
}

//Функция для записи в файл
void databaseWrite(){
    //Получение данных
    cout << "Введите название проекта: ";
    cin >> name;
    cout << "Введите путь до проекта: ";
    cin >> dir;
    //Считывание кол-ва проектов
    int howmany = 0;
    ifstream in("Projects.txt");
    if (in.is_open()){
        while (getline(in, line)){
            howmany++;
        }
    }
    in.close();
    //Запись проекта
    ofstream out("Projects.txt", std::ios::app);
    if (out.is_open()){
        out << howmany << ". Название: " << name << " | Путь: "<< dir << endl;
    }
    out.close();
}
//Функция очистки txt файла
void databaseClear(){
    ofstream out;
    //Открываю файл
    out.open("Projects.txt");
    //Запись пустой строки поверх прошлых
    if (out.is_open()){
        out << "" << endl;}
    out.close();
    cout << "Список очищен" << std::endl;
}
