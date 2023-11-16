#include "Song.h"

Song::Song() : duration(0), earnings(0) {
    std::cout << "Wywolanie konstruktora Song..." << std::endl;
}

Song::Song(const std::string& title) : duration(0), earnings(0) {
    std::cout << "Wywolanie konstruktora Song..." << std::endl;
    SetName(title);
}

Song::Song(const std::string& title, double duration, double earnings) : duration(duration), earnings(earnings) {
    std::cout << "Wywolanie konstruktora Song..." << std::endl;
    SetName(title);
}

Song::Song(const Song& other) : duration(other.duration), earnings(other.earnings) {
    std::cout << "Wywolanie konstruktora Song..." << std::endl;
    SetName(other.title);
}

Song::~Song() {
    std::cout << "Wywolanie destruktora Song..." << std::endl;
}

void Song::Presentation() const {
    std::cout << "### Prezentacja piosenki ###" << std::endl;
    std::cout << "Tytul: " << title << std::endl;
    std::cout << "Czas trwania: " << duration << std::endl;
    std::cout << "Zyski z odtwarzania (w mln $): " << earnings << std::endl;
}

void Song::SetName(const std::string& newTitle) {
    title = newTitle;
}

void Song::SetX(double newDuration) {
    duration = newDuration;
}

void Song::SetY(double newEarnings) {
    earnings = newEarnings;
}

