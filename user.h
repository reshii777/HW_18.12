#pragma once

#include <iostream>
#include <fstream>
#include <string>

class User {
    std::string _name;
    std::string _login;
    std::string _pass;

public:
    User(std::string name = "", std::string login = "", std::string pass = "");

    friend std::istream& operator>>(std::istream& inStream, User& user);
    friend std::ostream& operator<<(std::ostream& outStream, const User& user);
};
