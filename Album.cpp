#include "Album.h"

Album::Album(string t, Artist a, int ry) : title(t), artist(a), releaseYear(ry) {}

// Copy Constructor
Album::Album(const Album& other) : title(other.title), artist(other.artist), releaseYear(other.releaseYear), songs(other.songs) {}

// Destructor
Album::~Album() {}

// Getters
string Album::getTitle() {
    return title;
}

Artist Album::getArtist() {
    return artist;
}

int Album::getReleaseYear() {
    return releaseYear;
}

vector<Song> Album::getSongs() {
    return songs;
}

// Setters
void Album::setTitle(string t) {
    title = t;
}

void Album::setArtist(Artist a) {
    artist = a;
}

void Album::setReleaseYear(int ry) {
    releaseYear = ry;
}

void Album::addSong(Song s) {
    songs.push_back(s);
}