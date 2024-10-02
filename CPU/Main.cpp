#include "Laptop.h"
#include <iostream>

int main() 
{
    CPU cpu("Intel i7", 3200);
    SSD ssd("Samsung", 512);
    VideoCard videoCard("NVIDIA GTX 1660", 6144);
    RAM ram("DDR4", 16);
    Laptop laptop("Dell XPS", "Silver", 1500.0, cpu, ssd, videoCard, ram);
    laptop.display();

    return 0;
}
