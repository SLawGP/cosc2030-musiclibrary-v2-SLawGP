#ifndef STUDIOALBUM_H
#define STUDIOALBUM_H

#include "Album.h"

class StudioAlbum : public Album {
private:
    string studioName;

public:
    // Constructor
    StudioAlbum(string t, Artist a, int ry, string sn);
    // Copy Constructor
    StudioAlbum(const StudioAlbum& other);
    // Destructor
    ~StudioAlbum() override;

    // Getter
    string getStudioName();

    // Setter
    void setStudioName(string sn);

    // Display Info
    void display() override;
};

#endif