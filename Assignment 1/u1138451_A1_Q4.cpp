#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;


int main() {

    string guide = "1234567890123456789012345678901234567890123456789012345678901234567890";
    string myText;
    string fileOutPut[100] = {};
    string movieTitle[100] = {};
    string movieGenre[100] = {};
    string movieRating[100] = {};
    string movieQualities[100] = {};

    ifstream MyReadFile("q4data.txt");
    int i = 0;
    int ii = 0;
    int j = 1;
    int jj = 2;
    int x = 20;

    while (getline(MyReadFile, myText, '\n')) {

        fileOutPut[i] = myText;

        i++;
    }
    // takes a line from a a text file and stores it in the propper array
    while (i < x) {

        movieTitle[i] = fileOutPut[ii];
        movieGenre[i] = fileOutPut[j];
        movieRating[i] = fileOutPut[jj];
        string x = movieRating[i];
        float rating = stof(x);

        if (rating >= 3.5) {
            movieQualities[i] = "Good";
        }
        else if (rating > 2.0 && rating < 3.5) {
            movieQualities[i] = "OK";
        }
        else if (rating <= 2.0) {
            movieQualities[i] = "Not Good";
        }



        i++;
        j += 3;
        ii += 3;
        jj += 3;
    }

   // prints out the array info from the files
    cout << guide << endl;
    while (ii < x) {

        cout << right << fixed << setprecision(1);
        cout << setw(30) << movieTitle[ii] << setw(20) << movieGenre[ii] << setw(5)
            << movieRating[ii] << setw(15) << movieQualities[ii] << endl;

        ii++;

    }

    cout << guide;


    MyReadFile.close();
}


