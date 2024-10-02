#pragma once
#include <cstring>
using namespace std;

class SSD {
private:
    char* brand;
    int capacity;  

public:
    SSD(const SSD& other);
    SSD(const char* brandName, int cap);
    ~SSD();
    void display() const;
};


