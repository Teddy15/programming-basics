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
struct song {
    char* song_name;
    char* singer;
    char* genre;
};

// =========================================
// Checks if the playlist is empty.
// Return 1 if it is empty,
// else return 0.
// =========================================
int isEmpty(int);

// =========================================
// Checks if the playlist is full.
// Return 1 if it is full, else return 0.
// =========================================
int isFull(int, int);

// =========================================
// Add a song to a playlist.
// Make sure you do not add a song
// if you already have a full playlist of 5 songs.
// If there is already a song with the same
// name, singer AND genre - display the message 
// 'The song with name: %s, singer: %s, and genre: %s is already in the playlist!!!\n'
// =========================================
void add_to_playlist(struct song* playlist, struct song song, int* size);

// =========================================
// Remove a song from the playlist.
// Make sure you don't remove a song
// from an empty playlist with 0 songs.
// If there is no such song in the playlist,
// display the messgage 
// 'No such song with name: %s, singer: %s, and genre: %s!!!\n' 
// =========================================
void remove_from_playlist(struct song* playlist, struct song song, int* size);

void add_to_playlist(struct song* playlist, struct song song, int* size) {
    if(!isFull(*size, MAX)) {
        for (int i = 0; i < *(size); i++) {
            if(strcmp(playlist[i].song_name, song.song_name) == 0 &&
                strcmp(playlist[i].singer, song.singer) == 0 &&
                strcmp(playlist[i].genre, song.genre) == 0) {
                    printf("The song with name: %s, singer: %s, and genre: %s is already in the playlist!!!\n", song.song_name, song.singer, song.genre);
                    return;
                } 
        }
        strcpy(playlist[*size].song_name, song.song_name);
        strcpy(playlist[*size].singer, song.singer);
        strcpy(playlist[*size].genre, song.genre);
        *(size) = *(size) + 1;
    }
}

void remove_from_playlist(struct song* playlist, struct song song, int* size) {
    int counter = 0;
    
    if(isEmpty(*size)) {
        printf("Cannot remove from empty playlist!!!\n");
        return;
    }
    int check = 0;
    for (int i = 0; i < *(size); i++) {
        if(strcmp(playlist[i].song_name, song.song_name) == 0 &&
            strcmp(playlist[i].singer, song.singer) == 0 &&
            strcmp(playlist[i].genre, song.genre) == 0) {
               check = 1; 
        }
    }

    if (!check) {
        printf("No such song with name: %s, singer: %s, and genre: %s!!!\n", song.song_name, song.singer, song.genre);
        return;
    }
        
    for(int i = 0; i < *(size); i++) {
        if(strcmp(playlist[i].song_name, song.song_name) == 0 &&
            strcmp(playlist[i].singer, song.singer) == 0 &&
            strcmp(playlist[i].genre, song.genre) == 0) {
                continue;
        } else { 
            playlist[counter].song_name = playlist[i].song_name;
            playlist[counter].singer = playlist[i].singer;
            playlist[counter].genre = playlist[i].genre;
            counter++;
        }
    }

    *(size) = *(size) - 1;
    printf("Successfully remove the song! The current size of the playlist is: %d\n", *size);
}

int isEmpty(int size) {
    return size == 0;
}

int isFull(int size, int capacity) {
    return size == capacity;
}

int main() {
    // Add 5 songs to the playlist
    // and read their attributes
    // from the console!
    // Show that you can't add more
    // than 5 songs and that you 
    // can't remove a song if the
    // playlist is empty.
    struct song* playlist = (struct song*)malloc(sizeof(struct song) * MAX);
    
    int size = 0;

    for (int i = 0; i < MAX; i++) {
        playlist[i].song_name = (char*)malloc(sizeof(char) * 20);
        playlist[i].singer = (char*)malloc(sizeof(char) * 20);
        playlist[i].genre = (char*)malloc(sizeof(char) * 20);
    }

    for (int i = 0; size != 5 ; i++) {    
        struct song song;
        
        song.song_name = (char*)malloc(sizeof(char) * 20);
        song.singer = (char*)malloc(sizeof(char) * 20);
        song.genre = (char*)malloc(sizeof(char) * 20);
        
        printf("Enter song name:");
        scanf("%s", song.song_name);
        printf("Enter singer name:");
        scanf("%s", song.singer);
        printf("Enter genre:");
        scanf("%s", song.genre);

        add_to_playlist(playlist, song, &size);
        
        printf("Playlist[%d] song name: %s\n", size-1, playlist[size-1].song_name);
        printf("Playlist[%d] singer: %s\n", size-1, playlist[size-1].singer);
        printf("Playlist[%d] genre: %s\n", size-1, playlist[size-1].genre);

    }

    while (size > 0) {
        struct song song;
        
        song.song_name = (char*)malloc(sizeof(char) * 20);
        song.singer = (char*)malloc(sizeof(char) * 20);
        song.genre = (char*)malloc(sizeof(char) * 20);
        
        printf("Enter song name:");
        scanf("%s", song.song_name);
        printf("Enter singer name:");
        scanf("%s", song.singer);
        printf("Enter genre:");
        scanf("%s", song.genre);
        
        remove_from_playlist(playlist, song, &size);
    }
    printf("Size: %d\n", size);
    return 0;
}