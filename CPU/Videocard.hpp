#pragma once
#include <cstring>
using namespace std;

class VideoCard {
private:
    char* model;
    int memory;  // Обсяг пам'яті в MB

public:
    VideoCard(const VideoCard& other);
    VideoCard(const char* modelName, int mem);
    ~VideoCard();
    void display() const;
};
