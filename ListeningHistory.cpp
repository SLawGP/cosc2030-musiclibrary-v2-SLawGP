#include <iostream>
#include "ListeningHistory.h"

using namespace std;

// Constructor
ListeningHistory::ListeningHistory() {}

// Copy Constructor
ListeningHistory::ListeningHistory(const ListeningHistory& other) : history(other.history) {}

// Destructor
ListeningHistory::~ListeningHistory() {}

// Add Song to history
void ListeningHistory::addSong(Song s) {
    history.push_back(s);
}

// Display Listening History
void ListeningHistory::display() {
    cout << "Listening History:" << endl;
    for (const auto& song : history) {
        cout << "- " << song.getTitle() << " by " << song.getArtist().getName() << endl;
    }
}

// Friend Function
void displayListeningHistory(const ListeningHistory& lh) {
    cout << "Listening History (Friend Function):" << endl;
    for (const auto& song : lh.history) {
        cout << "- " << song.getTitle() << " by " << song.getArtist().getName() << endl;
    }
}