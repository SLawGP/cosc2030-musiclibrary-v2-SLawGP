#include <iostream>
#include "Song.h"

Song::Song(string t, Artist a, string al, int d, string g, string r) : title(t), artist(a), album(al), duration(d), genre(g), releaseDate(r) {}

// Getters
string Song::getTitle() const {
    return title;
}

Artist Song::getArtist() const {
    return artist;
}

string Song::getAlbum() {
    return album;
}

int Song::getDuration() {
    return duration;
}

string Song::getGenre() {
    return genre;
}

string Song::getReleaseDate() {
    return releaseDate;
}

// Setters
void Song::setTitle(string t) {
    title = t;
}

void Song::setArtist(Artist a) {
    artist = a;
}

void Song::setAlbum(string al) {
    album = al;
}

void Song::setDuration(int d) {
    duration = d;
}

void Song::setGenre(string g) {
    genre = g;
}

void Song::setReleaseDate(string r) {
    releaseDate = r;
}

// Display Info
void Song::display() {
    cout << "Song Title: " << title << endl;
    cout << "\nArtist Information:" << endl;
    artist.display();
    cout << "Album: " << album << endl;
    cout << "Duration: " << duration << " seconds" << endl;
    cout << "Genre: " << genre << endl;
    cout << "Release Date: " << releaseDate << endl;
}