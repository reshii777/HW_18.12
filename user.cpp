#include "user.h"

User::User(std::string name, std::string login, std::string pass)
    : _name(name), _login(login), _pass(pass) {}

std::istream& operator>>(std::istream& inStream, User& user) {
    inStream >> user._name >> user._login >> user._pass;
    return inStream;
}

std::ostream& operator<<(std::ostream& outStream, const User& user) {
    outStream << "Name: " << user._name << std::endl;
    outStream << "Login: " << user._login << std::endl;
    outStream << "Password: " << user._pass << std::endl;
    return outStream;
}
