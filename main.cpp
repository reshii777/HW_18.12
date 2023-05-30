#include <iostream>
#include <windows.h>
#include <fstream>
#include "user.h"
#include "message.h"

using namespace std;

int main() {
	// русская локализация

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru_Ru");

    // Создание объектов пользователей
    User user1("John Doe", "johndoe", "password1");
    User user2("Jane Smith", "janesmith", "password2");

    // Создание объекта сообщения
    Message message("Hello, Jane! How are you?", "johndoe", "janesmith");

    // Вывод информации о пользователях и сообщении
    std::cout << "User 1:" << std::endl;
    std::cout << user1 << std::endl;

    std::cout << "User 2:" << std::endl;
    std::cout << user2 << std::endl;

    std::cout << "Message:" << std::endl;
    std::cout << message << std::endl;

    // Запись данных пользователей и сообщения в файл
    std::ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << user1 << std::endl;
        outFile << user2 << std::endl;
        outFile << message << std::endl;
        outFile.close();
        std::cout << "Data has been written to data.txt" << std::endl;
    }
    else {
        std::cerr << "Failed to open data.txt for writing" << std::endl;
        return 1;
    }

    // Чтение данных из файла
    std::ifstream inFile("data.txt");
    if (inFile.is_open()) {
        User user3;
        User user4;
        Message message2;

        inFile >> user3;
        inFile >> user4;
        inFile >> message2;

        std::cout << "User 3:" << std::endl;
        std::cout << user3 << std::endl;

        std::cout << "User 4:" << std::endl;
        std::cout << user4 << std::endl;

        std::cout << "Message 2:" << std::endl;
        std::cout << message2 << std::endl;

        inFile.close();
    }
    else {
        std::cerr << "Failed to open data.txt for reading" << std::endl;
        return 1;
    }

    return 0;
}
