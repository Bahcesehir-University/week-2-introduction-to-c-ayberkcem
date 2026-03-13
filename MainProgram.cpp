#include <iostream>
#include <string>

using namespace std;

/*
    LAB 1 – INTRODUCTION TO C++

    In this lab you will practice:

    - writing a C++ program
    - printing with cout
    - using variables
    - getting input with cin
    - doing simple calculations

    Complete the TODO parts.
*/

int main()
{

    // ------------------------------------------------
    // PART 1 — Your First Output
    // ------------------------------------------------

    cout << "Welcome to the C++ Lab!" << endl;

    // TODO 1
    // Print your name
cout << "My name is Ayberk" << endl;

    // TODO 2
    // Print your department
cout << "My department is computer engineering" << endl;


    // TODO 3
    // Print today's year
    cout << "Today's year is 2026" << endl;



    cout << endl;


    // ------------------------------------------------
    // PART 2 — Variables
    // ------------------------------------------------

    // TODO 4
    // Create an integer variable called age
    // Assign your age to it
int age = 20;


    // TODO 5
    // Create a double variable called height
    // Example: 1.75
double height = 1.85;


    // TODO 6
    // Create a string variable called name
    // Store your name
string name = "Ayberk";


    // TODO 7
    // Print all variables
 cout << age << endl;
 cout << height << endl;
 cout << name << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 3 — User Input
    // ------------------------------------------------


    // TODO 8
    // Ask the user to enter their city;
   cout << "Please enter the city you live" << endl;
string city;
cin >> city;

    // TODO 9
    // Read the city using cin

    // TODO 10
    // Print: "You live in <city>"
cout << "You live in " << city << endl;
    cout << endl;


    // ------------------------------------------------
    // PART 4 — Numbers and Math
    // ------------------------------------------------

    int a;
    int b;

    // TODO 11
    // Ask the user to enter first number
    cout << "Enter first number " << endl;
cin >> a;

    // TODO 12
    // Read first number

    // TODO 13
    // Ask the user to enter second number
        cout << "Enter second number " << endl;

cin >> b;


    // TODO 14
    // Read second number


    // TODO 15
    // Create a variable called sum
    // store a + b
int z = a + b;

    // TODO 16
    // Print the sum
cout << "Sum of first number and second number " << z << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 5 — Mini Exercise
    // ------------------------------------------------

    string studentName;
    int birthYear;

    // TODO 17
    // Ask the student name
cout << "What is your name" << endl;
string yourname;
cin >> yourname;

    // TODO 18
    // Read the student name


    // TODO 19
    // Ask birth year

cout << "What is your birth year" << endl;
int birthyear;
cin >> birthyear;
    // TODO 20
    // Read birth year


    // TODO 21
    // Calculate approximateage
    // age = 2026 - birthYear
int approximateage = 2026 - birthyear;
cout << "Hello " << yourname <<  "  your birth year is " << approximateage  << endl;


    // TODO 22
    // Print:
    // "Hello <name> your approximate age is <age>"


    cout << endl;
    cout << "Lab Finished!" << endl;

    return 0;
}
