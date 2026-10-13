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
private:
    string title;
    Artist artist;
    string album;
    int duration; // in seconds
    string genre;
    string releaseDate;

public:
    Song(string t, Artist a, string al, int d, string g, string r) : title(t), artist(a), album(al), duration(d), genre(g), releaseDate(r) {
    }

    // Getters
    string getTitle() {
        return title;
    }

    Artist getArtist() {
        return artist;
    }

    string getAlbum() {
        return album;
    }

    int getDuration() {
        return duration;
    }

    string getGenre() {
        return genre;
    }

    string getReleaseDate() {
        return releaseDate;
    }

    // Setters
    void setTitle(string t) {
        title = t;
    }

    void setArtist(Artist a) {
        artist = a;
    }

    void setAlbum(string al) {
        album = al;
    }

    void setDuration(int d) {
        duration = d;
    }

    void setGenre(string g) {
        genre = g;
    }

    void setReleaseDate(string r) {
        releaseDate = r;
    }

    // Display Info
    void display() {
        cout << "Song Title: " << title << endl;

        cout << "\nArtist Information:" << endl;
        artist.display();
        
        cout << "Album: " << album << endl;
        cout << "Duration: " << duration << " seconds" << endl;
        cout << "Genre: " << genre << endl;
        cout << "Release Date: " << releaseDate << endl;
    }
}; 

int main() {
    // Create instance of Artist object 

    // Create instance of Song object

    // Call song instance display function 

    return 0; 
}
