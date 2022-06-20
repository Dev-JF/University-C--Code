# include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string guide = "1234567890123456789012345678901234567890123456789012345678901234567890";

    // storing of all the info into arrays

    int ii = 0;
    float rating[5] = { 4.4, 3.1, 2.0, 1.2, 4.8 };
    string movieName[5] = { "The Batman","Monster Family 2","The Duke", "The Bad Guy", "The Godfather" };
    string movieGenre[5] = { "Action", "Animation", "Comedy", "Animation", "Drama" };

    string movieQualities[5] = { "Good", "OK", "Not Good", "Not Good", "Good" };



    // loops through the array and prints them out
    cout << guide << endl;
    while (ii < 5) {

        cout << right << fixed << setprecision(1);
        cout << setw(30) << movieName[ii] << setw(20) << movieGenre[ii] << setw(5)
            << rating[ii] << setw(15) << movieQualities[ii] << endl;

        ii++;

    }

    cout << guide;
    return 0;

}