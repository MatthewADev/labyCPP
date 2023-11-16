#ifndef ALBUM_H
#define ALBUM_H

#include "Song.h"

class Album {
private:
    std::string title;
    int numSongs;
    Song* songs;

public:
    Album();
    Album(const std::string& title);
    Album(const std::string& title, const Song& song1, const Song& song2, const Song& song3);
    Album(const std::string& title, const Song& song1, const Song& song2, const Song& song3, const Song& song4);
    Album(const std::string& title, int numSongs, const Song* songList);
    Album(const Album& other);
    ~Album();

    void Presentation() const;
    void SetName(const std::string& title);
    void SetNewSongs(int numSongs, const Song* songList);
    void SetSong(int index, const std::string& title, double duration, double earnings);

    Song* GetSongs() const;

    
};

#endif 