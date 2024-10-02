#include "SSD.h"
#include <iostream>

SSD::SSD(const SSD& other) {
    capacity = other.capacity;
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);

SSD::SSD(const char* brandName, int cap) : capacity(cap)
{
    brand = new char[strlen(brandName) + 1];
    strcpy(brand, brandName);
}

SSD::~SSD() 
{
    delete[] brand;
}

void SSD::display() const 
{
    cout << "SSD Brand: " << brand << ", Capacity: " << capacity << " GB" << endl;
}

