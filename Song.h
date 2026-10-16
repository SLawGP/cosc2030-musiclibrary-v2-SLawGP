#ifndef SONG_H
#define SONG_H

#include <string>
#include "Artist.h"

using namespace std;

class Song {
private:
    string title;
    Artist artist;
    string album;
    int duration; // in seconds
    string genre;
    string releaseDate; // in format YYYY-MM-DD

public:
    Song(string t, Artist a, string al, int d, string g, string r) : title(t), artist(a), album(al), duration(d), genre(g), releaseDate(r) {}

    // Getters
    string getTitle() const;
    Artist getArtist() const;
    string getAlbum();
    int getDuration();
    string getGenre();
    string getReleaseDate();

    // Setters
    void setTitle(string t);
    void setArtist(Artist a);
    void setAlbum(string al);
    void setDuration(int d);
    void setGenre(string g);
    void setReleaseDate(string r);

    // Display Info
    void display();
};

#endif

