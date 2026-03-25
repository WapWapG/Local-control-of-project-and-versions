#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
    ofstream out("Projects.txt", std::ios::app);
    if (out.is_open()){
        out << lines++ << " New hello world!" << endl;
    }
    out.close();
    //Реализация
}
