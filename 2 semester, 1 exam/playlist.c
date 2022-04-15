// =========================================
// First exam for the second half of the
// school year. Programs, which do not 
// compile will not be graded!!!
// Do NOT edit or delete anything from the
// code given to you below! Good luck!
// =========================================

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

// =========================================
// Song Structure
// Should have a name for the song, 
// name for the singer, and genre.
// =========================================
struct song {};

// =========================================
// Add a song to a playlist.
// Make sure you do not add a song
// if you already have a full playlist of 5 songs.
// If there is already a song with the same
// name, singer AND genre - display the message 
// 'The song with name: %s, singer: %s, and genre: %s is already in the playlist!!!\n'
// =========================================
void add_to_playlist(struct song* playlist, struct song song);

// =========================================
// Remove a song from the playlist.
// Make sure you don't remove a song
// from an empty playlist with 0 songs.
// If there is no such song in the playlist,
// display the messgage 
// 'No such song with name: %s, singer: %s, and genre: %s!!!\n' 
// =========================================
void remove_from_playlist(struct song* playlist, struct song song);

// =========================================
// Checks if the playlist is empty.
// Return 1 if it is empty,
// else return 0.
// =========================================
int isEmpty(int size, int capacity);

// =========================================
// Checks if the playlist is full.
// Return 1 if it is full, else return 0.
// =========================================
int isFull(int size, int capacity);

int main() {
    // Add 5 songs to the playlist
    // and read their attributes
    // from the console!
    // Show that you can't add more
    // than 5 songs and that you 
    // can't remove a song if the
    // playlist is empty.
    return 0;
}