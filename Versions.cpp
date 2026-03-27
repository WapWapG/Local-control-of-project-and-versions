#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Не работает
//Функция копирования проекта
void CopyProject(){
    //Задаем данные
    string dirName;
    string Version;
    string Link;
    cout << "Введите название проекта без пробелов: ";
    cin >> dirName;
    cout << "Введите версию: ";
    cin >> Version;
    cout << "Введите ссылку на версию: ";
    cin >> Link;
    //Считывание файла txt
    int many = 0;
    ifstream in("Verions.txt");
    if (in.is_open()){
        while (getline(in, line)){
            many++;
        }
    }
    in.close();
    //Запись проекта
    ofstream out("Versions.txt", ios::app);
    if (out.is_open()){
        out << many++ << ". Название: " << dirName << " | Ссылка: " << Link << " | " << Version << endl;
    }
    out.close();
    cout << "Запись прошла успешна!" << endl;
}

void deleteProjects(){
    ofstream out;
    //Открываю файл
    out.open("Versions.txt");
    //Запись пустой строки поверх прошлых
    if (out.is_open()){
        out << "" << endl;}
        out.close();
        cout << "Список очищен" << std::endl;
}

void ProjectsShow(){
    ifstream in("Versions.txt");
    if (in.is_open()){
        while (getline(in, line)){
            cout << line << "\n" << endl;
        }
    }
    in.close();
}
