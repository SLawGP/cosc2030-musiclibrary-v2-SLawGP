#ifndef LISTENINGHISTORY_H
#define LISTENINGHISTORY_H

#include <vector>
#include "Song.h"

using namespace std;

class ListeningHistory {
private:
    vector<Song> history;

public:
    // Constructor
    ListeningHistory();

    // Copy Constructor
    ListeningHistory(const ListeningHistory& other);

    // Destructor
    ~ListeningHistory();

    // Add Song to history
    void addSong(Song s);

    // Display Listening History
    void display();

    // Friend Function
    friend void displayListeningHistory(const ListeningHistory& lh);
};

#endif