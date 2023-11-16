#include "Album.h"

Album::Album() : numSongs(0), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
}

Album::Album(const std::string& title) : numSongs(0), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    SetName(title);
}

Album::Album(const std::string& title, const Song& song1, const Song& song2, const Song& song3)
    : numSongs(3), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    SetName(title);
    SetNewSongs(3, new Song[3]{song1, song2, song3});
}

Album::Album(const std::string& title, int numSongs, const Song* songList) : numSongs(numSongs), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    SetName(title);
    SetNewSongs(numSongs, songList);
}

Album::Album(const std::string& title, const Song& song1, const Song& song2, const Song& song3, const Song& song4) : numSongs(4), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    SetName(title);
    SetNewSongs(4, new Song[4]{song1, song2, song3, song4});
}


Album::Album(const Album& other) : numSongs(other.numSongs), songs(nullptr) {
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    SetName(other.title);
    SetNewSongs(other.numSongs, other.songs);
}

Album::~Album() {
    std::cout << "Wywolanie destruktora Album..." << std::endl;
    delete[] songs;
}

void Album::Presentation() const {
    std::cout << "### Prezentacja albumu muzycznego ###" << std::endl;
    std::cout << "Tytul: " << title << std::endl;
    std::cout << "Liczba piosenek: " << numSongs << std::endl;

    for (int i = 0; i < numSongs; ++i) {
        songs[i].Presentation();
    }
}

void Album::SetName(const std::string& newTitle) {
    title = newTitle;
}

void Album::SetNewSongs(int num, const Song* songList) {
    delete[] songs;
    numSongs = num;
    songs = new Song[numSongs];
    
    for (int i = 0; i < numSongs; ++i) {
        songs[i] = songList[i];
    }
}

void Album::SetSong(int index, const std::string& title, double duration, double earnings) {
    if (index >= 0 && index < numSongs) {
        songs[index].SetName(title);
        songs[index].SetX(duration);
        songs[index].SetY(earnings);
    }
}

Song* Album::GetSongs() const {
    return songs;
}

