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

    string getName() {
        return name;
    }

    string getGenre() {
        return genre;
    }

    int getYearFormed() {
        return yearFormed;
    }

    string getCountry() {
        return country;
    }

    // Setters
    void setName(string n) {
        name = n;
    }

    void setGenre(string g) {
        genre = g;
    }

    void setYearFormed(int y) {
        yearFormed = y;
    }

    void setCountry(string c) {
        country = c;
    }

    // Display Info
    void display() {
        cout << "Artist Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Year Formed: " << yearFormed << endl;
        cout << "Country: " << country << endl;
    }
}; 

class Song {
};

int main() {
    // Create instance of Artist object 

    // Create instance of Song object

    // Call song instance display function 

    return 0; 
}
