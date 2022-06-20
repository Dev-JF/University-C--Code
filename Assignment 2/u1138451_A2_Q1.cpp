#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

void printEntry(string name, int prof);

int main() {

	string enterName = "Please enter a staff name('done' to leave the program):";
	string enterStaffProf = "Please enter the profession of ";
	string  wrongEntry = "Wrong entry!";
	string stopWhile = "done";
	string staffName;
	int staffProf;


	// takes user input and prints it out until done is written

	do {
		cout << enterName << endl;
		getline(cin, staffName);

		if (staffName == stopWhile) {

			break;
		}
		else {
			cout << enterStaffProf << staffName << endl;

			cin >> staffProf;
			if (cin.fail()) {
				cin.clear();
				staffProf = 0;
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		// prints input if staffProf is correct
		if (staffProf < 1 || staffProf > 4) {
			cout << wrongEntry << endl;
		}
		else {
			printEntry(staffName, staffProf);
		}


	}

	while (staffName != stopWhile);

}


void printEntry(string name, int prof) {

	string staffProf;

	switch (prof) {
	case 1:
		staffProf = "Receptionist";
		break;
	case 2:
		staffProf = "Administrator";
		break;
	case 3:
		staffProf = "Nurse";
		break;
	case 4:
		staffProf = "Doctor";
		break;
	}

	cout << "Staff " << name << " is an " << staffProf << endl;

}

