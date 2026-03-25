#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Функция для считывания txt файла
int databaseCheck(){
    string line;
    std::ifstream in("Projects.txt");
    if (in.is_open()){
        while (std::getline(in, line)){
            cout << line << endl;
        }
    }
    in.close();
    return 0;
}

//int databaseWrite(){
    //Реализация
//}
