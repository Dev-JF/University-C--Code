#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Book {

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setISBN(string n) {
        ISBN = n;

    }

    string getISBN() {
        return ISBN;
    }

    void print() {

        name = getName();
        ISBN = getISBN();

        cout << "Name of Book: " << name << endl;

        cout << "ISBN: " << ISBN << endl;

    }



private:

    string name;

    string ISBN;


};


class CookBook : private Book {

private:
    int ISBN;

};

bool operator== (const name& n1, const name& n2);

bool Bsame(Book, Book);

bool Csame(CookBook, CookBook);

int main() {

    Book B;

    B1 = B.setName("A")
    B2 = B.setName("B")

        if (Bsame(B1, B2) == true) {
            
            cout << "they are the same" << endl;
        
        }

};





bool Bsame(Book, Book) {

    bool operator== (const Book & B1, const Book & B2) {
        return B1.name == B2.name

    }

    bool Csame(CookBook, CookBook) {

        bool operator== (const CookBook & C1, const CookBook & C2) {
            return C1.name == C2.name

        }
