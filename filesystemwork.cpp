#include <filesystem>
#include <iostream>
#include <string>
using namespace std;

//Не работает
//Функция копирования директорий
//void CopyFolder(){
//    string systemDir;
//    //Опрос для получения данных
//    cout << "Укажите путь до папки с проектом" << "\n";
//    cin >> systemDir;
//    //Вход в папку Projects_copy
//    filesystem::directory_entry Directory{R"(/Projects_copy)"};
//    //Копирование
//    filesystem::copy(
//        R(systemDir),
//    fs::copy_options::skip_existing |
//    fs::copy_options::recursive |
//    fs::copy_options::directories_only);
//    cout << "Укажите версию" << "\n";
//    string Version;
//    cin >> Version;
//}
