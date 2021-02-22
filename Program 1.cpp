//Program 1 for UMKC CS 461 by Nick Wilmsmeyer

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main () {

fstream input;
int gameCounter = 0;


input.open("prog1_input.txt", ios::in);
if(input.is_open()) {
    string gameString;
    string arr[4][4];
    string gameData;

    //gets num of games and converts to int
    getline(input, gameString); 
    int numOfGames = stoi(gameString);

    //fills the arr with data from file
    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 3; j++) {
            getline(input, arr[i][j]);
        }
    }
/*
    //iterate through puzzle to find E
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 4; y++) {
            if(arr[x][y] == "2") {
                cout << "Location is:" + arr[x][y];
            } else {
                cout << "Couldnt find.";
            }
        }
    }*/

    //prints array
   for(int k = 0; k <= 3; k++) {
       for(int l = 0; l <= 3; l++) {
           cout << arr[k][l];
       }
   }
}
else {
    cout << "There is no input file present.";
}




input.close();

return 0;





}