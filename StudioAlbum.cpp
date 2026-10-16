#include <iostream>
#include <string>
#include "StudioAlbum.h"

using namespace std;

// Constructor
StudioAlbum::StudioAlbum(string t, Artist a, int ry, string sn) : Album(t, a, ry), studioName(sn) {}

// Copy Constructor
StudioAlbum::StudioAlbum(const StudioAlbum& other) : Album(other), studioName(other.studioName) {}

// Destructor
StudioAlbum::~StudioAlbum() {}

// Getter
string StudioAlbum::getStudioName() {
    return studioName;
}

// Setter
void StudioAlbum::setStudioName(string sn) {
    studioName = sn;
}

// Display Info
void StudioAlbum::display() {
    cout << "Album Title: " << title << endl;
    cout << "Artist: " << artist.getName() << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Studio Name: " << studioName << endl;
    cout << "Songs in the Album:" << endl;
    for (const auto& song : songs) {
        cout << "- " << song.getTitle() << endl;
    }
}