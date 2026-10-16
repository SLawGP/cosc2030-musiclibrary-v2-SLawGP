#include "Artist.h"

Artist::Artist(string n, string g, int y, string c) : name(n), genre(g), yearFormed(y), country(c) {}

string Artist::getName() const {
    return name;
}

string Artist::getGenre() {
    return genre;
}

int Artist::getYearFormed() {
    return yearFormed;
}

string Artist::getCountry() {
    return country;
}

// Setters
void Artist::setName(string n) {
    name = n;
}

void Artist::setGenre(string g) {
    genre = g;
}

void Artist::setYearFormed(int y) {
    yearFormed = y;
}

void Artist::setCountry(string c) {
    country = c;
}

// Display Info
void Artist::display() {
    cout << "Artist Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year Formed: " << yearFormed << endl;
    cout << "Country: " << country << endl;
}