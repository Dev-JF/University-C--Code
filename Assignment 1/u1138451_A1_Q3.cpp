# include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {

    string guide = "1234567890123456789012345678901234567890123456789012345678901234567890";
    string enterMovieAmount = "Please enter the number of movies ";
    string enterMovieName = "Please  enter the name of the moive ";
    string enterMovieGenre = "Please enter the movie genre and rating ";
    int x;
    int i = 0;
    int ii = 0;
    float rating[50] = {};
    string movieName[50] = {};
    string movieGenre[50] = {};

    string movieQualities[50] = {};

    cout << enterMovieAmount;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

   // takes user input, stores the vlaue of movie quality based on the user rating
    while (i < x) {
        cout << enterMovieName << endl;
        getline(cin, movieName[i]);

        cout << enterMovieGenre << endl;
        cin >> movieGenre[i] >> rating[i];

        if (rating[i] >= 3.5) {
            movieQualities[i] = "Good";
        }
        else if (rating[i] > 2.0 && rating[i] < 3.5) {
            movieQualities[i] = "OK";
        }
        else if (rating[i] <= 2.0) {
            movieQualities[i] = "Not Good";
        }

        i++;
    }

    // prints the user input in the arrays
    cout << guide << endl;
    while (ii < x) {

        cout << left << fixed << setprecision(1);
        cout << setw(30) << movieName[ii] << setw(20) << movieGenre[ii] << setw(5)
            << rating[ii] << setw(15) << movieQualities[ii] << endl;

        ii++;

    }

    cout << guide;
    return 0;

}