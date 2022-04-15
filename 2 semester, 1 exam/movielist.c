// =========================================
// First exam for the second half of the
// school year for group 2. Programs, which do not 
// compile will not be graded!!!
// Do NOT edit or delete anything from the
// code given to you below! Good luck!
// =========================================

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

// =========================================
// Movie Structure
// Should have a name for the movie, 
// name for the director, and genre.
// =========================================
struct movie {};

// =========================================
// Add a movie to a movielist.
// Make sure you do not add a movie
// if you already have a full movielist of 5 movies.
// If there is already a movie with the same
// name, director AND genre - display the message 
// 'The movie with name: %s, director: %s, and genre: %s is already in the movielist!!!\n'
// =========================================
void add_to_movielist(struct movie* movielist, struct movie movie);

// =========================================
// Remove a movie from the movielist.
// Make sure you don't remove a movie
// from an empty movielist with 0 movies.
// If there is no such movie in the playlist,
// display the messgage 
// 'No such movie with name: %s, director: %s, and genre: %s!!!\n' 
// =========================================
void remove_from_movielist(struct movie* playlist, struct movie song);

// =========================================
// Checks if the movielist is empty.
// Return 1 if it is empty,
// else return 0.
// =========================================
int isEmpty(int size, int capacity);

// =========================================
// Checks if the movielist is full.
// Return 1 if it is full, else return 0.
// =========================================
int isFull(int size, int capacity);

int main() {
    // Add 5 movies to the playlist
    // and read their attributes
    // from the console!
    // Show that you can't add more
    // than 5 movies and that you 
    // can't remove a movie if the
    // movielist is empty.
    return 0;
}