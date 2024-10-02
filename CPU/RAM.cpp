#include "RAM.h"
#include <iostream>

RAM::RAM(const RAM& other)
{
    size = other.size;
    type = new char[strlen(other.type) + 1];
    strcpy(type, other.type);
}


RAM::RAM(const char* ramType, int ramSize) : size(ramSize)
{
    type = new char[strlen(ramType) + 1];
    strcpy(type, ramType);
}

RAM::~RAM() {
    delete[] type;
}

void RAM::display() const {
    cout << "RAM Type: " << type << ", Size: " << size << " GB" << endl;
}
