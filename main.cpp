#include <iostream>
using namespace std;

//Функция приветсвия пользователя, вывод первого сообщения.
void hello(){
    cout <<  "Привет! что будешь делать?" <<"\n";
    cout <<  "1. Мои проекты(В реализции)";
}

int databaseCheck(int number){
    if (number == 1){
        // реализация, взятие переменных из database.cpp в зависимости от числа
    }
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
        databaseCheck(number);
        //На доработку
    }
}
