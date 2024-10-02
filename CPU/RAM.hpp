#pragma once
#include <cstring>
using namespace std;

class RAM 
{
private:
    char* type;
    int size; 

public:
    RAM(const RAM& other);
    RAM(const char* ramType, int ramSize);
    ~RAM();
    void display() const;
};
