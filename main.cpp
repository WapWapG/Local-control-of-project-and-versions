#include <iostream>
#include <fstream>
#include <string>
#include "database.cpp"
#include "Versions.cpp"
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
            ProjectsShow();
            break;
        case 2:
            CopyProject();
            break;
        case 3:
            int clearVersionsure;
            cout << "Вы уверены?" << "\n";
            cout << "1. Да" << "\n";
            cout << "2. Выход" << "\n";
            cin  >> clearVersionsure;
            if (clearVersionsure == 1){
                deleteProjects();
            }
            if (clearVersionsure == 2){
                break;
            }
            break;
        default:
            cout << "Некорректный номер действия" << "\n";
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
            cout << "Просмотреть список версий?" << "\n";
            cout << "1. Да" << "\n";
            cout << "2. Добавить версию" << "\n";
            cout << "3. Очистить список" << "\n";
            cout << "4. Выход" << "\n";
            cin >> AnswerFor1;
            checkAnswer();
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
            cout << "2. Выход" << "\n";
            cin  >> clearDatabasesure;
            //Проверка ответа
            if (clearDatabasesure == 1){
                databaseClear();
            }
            if (clearDatabasesure == 2){
                break;
            }
            break;
        default:
            cout << "Некорректный номер действия" << "\n";
    }
}
}

//Version A.2.0
