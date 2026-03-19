#include <iostream>
#include <string>

class Counter {
private:
    int id;
    static inline int totalCounters = 0;
public:
    Counter() {
        id = ++totalCounters;
        std::cout << "Счетчик #["<<id<<"] создан"<< std::endl;
    }
    ~Counter() {
        --totalCounters;
        std::cout << "Счетчик #["<<id<<"] уничтожен"<< std::endl;
    }
    static int getTotalCounters() { return totalCounters; }
};

int main() {
    int N;
    std::cin >> N;
    
    Counter* counters = new Counter[N];
    std::cout << Counter::getTotalCounters() << std::endl;
    
    delete[] counters;
    std::cout << Counter::getTotalCounters() << std::endl;
    
    return 0;
}
