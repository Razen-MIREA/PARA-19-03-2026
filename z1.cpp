#include <iostream>
#include <string>

class Message {
private:
    std::string text;
public:
    Message(std::string t) : text(t) {
        std::cout << "Создано сообщение: ["<<text<<"]"<< std::endl;
    }
    ~Message() {
        std::cout << "Удалено сообщение: ["<<text<<"]"<< std::endl;
    }
    void print() {
        std::cout << text << std::endl;
    }
};

int main() {
    Message msg1("Первое сообщение");
    Message* msg2 = new Message("Второе сообщение");
    
    msg1.print();
    msg2->print();
    
    delete msg2;
    return 0;
}
