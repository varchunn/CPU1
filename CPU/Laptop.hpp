#pragma once
#include "CPU.h"
#include "SSD.h"
#include "VideoCard.h"
#include "RAM.h"
#include <cstring>

class Laptop 
{
private:
    char* name;
    char* color;
    double price;
    CPU cpu;
    SSD ssd;
    VideoCard videoCard;
    RAM ram;

public:
    Laptop(const Laptop& other);
    Laptop(const char* laptopName, const char* laptopColor, double laptopPrice,
           const CPU& cpu, const SSD& ssd, const VideoCard& videoCard, const RAM& ram);
    ~Laptop();
    void display() const;
};

