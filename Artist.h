#ifndef ARTIST_H
#define ARTIST_H

#include <iostream>
#include <string>

using namespace std;

class Artist {
private:
    string name;
    string genre;
    int yearFormed;
    string country;

public:
    Artist(string n, string g, int y, string c) : name(n), genre(g), yearFormed(y), country(c) {}

    string getName() const;
    string getGenre();
    int getYearFormed();
    string getCountry();

    // Setters
    void setName(string n);
    void setGenre(string g);
    void setYearFormed(int y);
    void setCountry(string c);

    // Display Info
    void display();
};

#endif