#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Message {
    std::string _text;
    std::string _sender;
    std::string _receiver;

public:
    Message(std::string text = "", std::string sender = "", std::string receiver = "");

    friend std::istream& operator>>(std::istream& inStream, Message& message);
    friend std::ostream& operator<<(std::ostream& outStream, const Message& message);
};
