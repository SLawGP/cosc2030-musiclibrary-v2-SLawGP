#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Artist {
private:
    string name;
    string genre;
    int yearFormed;
    string country;

public:
    Artist(string n, string g, int y, string c) : name(n), genre(g), yearFormed(y), country(c) {}

    string getName() const {
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
    string getTitle() const {
        return title;
    }

    Artist getArtist() const {
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

class Album {
protected:
    string title;
    Artist artist;
    int releaseYear;
    vector<Song> songs;

public:
    Album(string t, Artist a, int ry) : title(t), artist(a), releaseYear(ry) {}

    // Constructor
    Album(const Album& other) : title(other.title), artist(other.artist), releaseYear(other.releaseYear), songs(other.songs) {}

    // Destructor
    virtual ~Album() {}

    // Getters
    string getTitle() {
        return title;
    }

    Artist getArtist() {
        return artist;
    }

    int getReleaseYear() {
        return releaseYear;
    }

    vector<Song> getSongs() {
        return songs;
    }

    // Setters
    void setTitle(string t) {
        title = t;
    }

    void setArtist(Artist a) {
        artist = a;
    }

    void setReleaseYear(int ry) {
        releaseYear = ry;
    }

    void addSong(Song s) {
        songs.push_back(s);
    }

    // Pure virtual function to be implemented by derived classes
    virtual void display() = 0;
};

class StudioAlbum : public Album {
private:
    string studioName;

public:
    // Constructor
    StudioAlbum(string t, Artist a, int ry, string sn) : Album(t, a, ry), studioName(sn) {}

    // Copy Constructor
    StudioAlbum(const StudioAlbum& other) : Album(other), studioName(other.studioName) {}

    // Destructor
    ~StudioAlbum() override {}

    // Getter
    string getStudioName() {
        return studioName;
    }

    // Setter
    void setStudioName(string sn) {
        studioName = sn;
    }

    // Display Info
    void display() override {
        cout << "Studio Album Title: " << title << endl;
        cout << "\nArtist Information:" << endl;
        artist.display();
        cout << "Release Year: " << releaseYear << endl;
        cout << "Studio Name: " << studioName << endl;
        cout << "Songs in the Album:" << endl;
        for (const auto& song : songs) {
            cout << "- " << song.getTitle() << endl;
        }
    }
};

class ListeningHistory {
private:
    vector<Song> history;

public:
    // Constructor
    ListeningHistory() {}

    // Copy Constructor
    ListeningHistory(const ListeningHistory& other) : history(other.history) {}

    // Destructor
    ~ListeningHistory() {}

    // Add Song to history
    void addSong(Song s) {
        history.push_back(s);
    }

    // Display Listening History
    void display() {
        cout << "Listening History:" << endl;
        for (const auto& song : history) {
            cout << "- " << song.getTitle() << " by " << song.getArtist().getName() << endl;
        }
    }
    // Friend Function
    friend void displayListeningHistory(const ListeningHistory& lh) {
        cout << "Listening History (Friend Function):" << endl;
        for (const auto& song : lh.history) {
            cout << "- " << song.getTitle() << " by " << song.getArtist().getName() << endl;
        }
    }
};

int main() {
    // Create instance of Artist object 
    Artist artist("Ado", "J-Pop", 2017, "Japan");

    // Create instance of Song object
    Song song("Usseewa", artist, "Usseewa", 206, "J-Pop", "2020-10-23");

    // Display Song information
    song.display();

    // Create instance of StudioAlbum object
    StudioAlbum album("Usseewa", artist, 2020, "Virgin Music");

    // Add song to album
    album.addSong(song);

    // Display Album information
    album.display();

    // Create instance of ListeningHistory object
    ListeningHistory history;

    // Add song to listening history
    history.addSong(song);

    // Display Listening History
    history.display();

    // Friend function to display listening history
    displayListeningHistory(history);

    return 0; 
}
