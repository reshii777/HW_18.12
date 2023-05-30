#include "message.h"

Message::Message(std::string text, std::string sender, std::string receiver)
    : _text(text), _sender(sender), _receiver(receiver) {}

std::istream& operator>>(std::istream& inStream, Message& message) {
    inStream >> message._text >> message._sender >> message._receiver;
    return inStream;
}

std::ostream& operator<<(std::ostream& outStream, const Message& message) {
    outStream << "Text: " << message._text << std::endl;
    outStream << "Sender: " << message._sender << std::endl;
    outStream << "Receiver: " << message._receiver << std::endl;
    return outStream;
}
