#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Функция приветсвия пользователя, вывод первого сообщения.
void hello(){
    cout <<  "Привет! что будешь делать?" <<"\n";
    cout <<  "1. Мои проекты(В реализции)";
}

// Функция для считывания txt файла
int databaseCheck(){
    string line;
    std::ifstream in("hello.txt");
    if (in.is_open()){
        while (std::getline(in, line)){
            cout << line << endl;
        }
    }
    in.close();
}

int main(){
    //Инициализация переменных
    //и вывод списка действий
    int answer;
    int number;
    hello();
    cin >> answer;
    if (answer == 1){
        number = 1;
        databaseCheck();
        //На доработку
    }
}
