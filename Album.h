#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include <vector>
#include "Artist.h"
#include "Song.h"

using namespace std;

class Album {
protected:
    string title;
    Artist artist;
    int releaseYear;
    vector<Song> songs;

public:
    Album(string t, Artist a, int ry);
    // Copy Constructor
    Album(const Album& other);
    // Destructor
    virtual ~Album();

    // Getters
    string getTitle();
    Artist getArtist();
    int getReleaseYear();
    vector<Song> getSongs();

    // Setters
    void setTitle(string t);
    void setArtist(Artist a);
    void setReleaseYear(int ry);
    void addSong(Song s);

    // Virtual Function
    virtual void display() = 0; // Pure virtual function to be implemented by derived classes
};

#endif