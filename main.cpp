#include <iostream>
#include <fstream>
#include <string>
#include "database.cpp"
#include "filesystemwork.cpp"
using namespace std;
int AnswerFor1;
//Функция приветсвия пользователя, вывод первого сообщения.
void hello(){
    cout <<  "Привет! что будешь делать?" <<"\n";
    cout <<  "1. Мои проекты(В реализции)" << "\n";
    cout <<  "2. Добавить проект" << "\n";
    cout <<  "3. Очистить список проектов" << "\n";
}
//Сверка ответов
void checkAnswer(){
    switch (AnswerFor1){
        case 1:
            CopyFolder();
    }
}

int main(){
    while(true){
    //Инициализация переменных
    //и вывод списка действий
    int answer;
    hello();
    cin >> answer;
    //Выполнение действий
    switch(answer){
        case 1:
            //Вызов проверки Projects.txt
            databaseCheck();
            //Вызов сохранения
            //cout << "Сделать сохранение проекта?" << "\n";
            //cout << "1. Да" << "\n";
            //cout << "2. Выход" << "\n";
            //cin >> AnswerFor1;
            //checkAnswer();
            break;

        case 2:
            //Вызов записи
            databaseWrite();
            break;

        case 3:
            //Обьявление переменной
            int clearDatabasesure;
            cout << "Вы уверены?" << "\n";
            cout << "1. Да" << "\n";
            cout << "2. Нет" << "\n";
            cin  >> clearDatabasesure;
            //Проверка ответа
            if (clearDatabasesure == 1){
                databaseClear();
            }
            else{
                cout << "Некоректно";
            }
            break;
        default:
            cout << "Некорректный номер действия" << "\n";
    }
}
}

//Version A.1.3
