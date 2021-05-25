// Rocket Rides.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char userInput;

void processInput(char input) {
    switch (input) {
    case '0':
        cout << "Not much to help with here, bruh.\n\n";
        break;
    case '5':
        cout << "Bye.\n\n";
        return;
        break;
    default:
        cout << "Not sure what you mean, try again maybe?\n\n";
        break;
    }
}

int main()
{
    cout << "==== Rocket Rides ====\n\n";

    do {
        cout << "Choose an option:\n\n";
        cout << "1) Book a seat\n";
        cout << "2) View available seats\n";
        cout << "3) View booked seats\n";
        cout << "4) Cancel a reservation\n";
        cout << "5) Exit\n";
        cout << "0) Help\n\n";
        cout << "=>";
        cin >> userInput;

        processInput(userInput);
    } while (userInput != '5');
 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
