#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song {
private:
    std::string title;
    double duration;
    double earnings;

public:
    Song();
    Song(const std::string& title);
    Song(const std::string& title, double duration, double earnings);
    Song(const Song& other);
    ~Song();

    void Presentation() const;
    void SetName(const std::string& title);
    void SetX(double duration);
    void SetY(double earnings);

};

#endif 
