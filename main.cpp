#include <iostream>
#include <fstream>
#include <string>
#include "database.cpp"
using namespace std;

//Функция приветсвия пользователя, вывод первого сообщения.
void hello(){
    cout <<  "Привет! что будешь делать?" <<"\n";
    cout <<  "1. Мои проекты(В реализции)" << "\n";
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
