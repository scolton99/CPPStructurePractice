// Structures.cpp : main project file.

#include "stdafx.h"																					// Includes commonly used functions
#include <iostream>																					// Includes the cin, cout, cin.ignore(), and getline() functions
#include <string>																					// Includes support for string type variables
#include <fstream>																					// Includes support for file streams

using namespace std;																				// Changes to standard namespace (std)

int main(array<System::String ^> ^args)																// Declares the main function as one with an integer return type, and adds optional arguments
{																									// Begin code
	ofstream output_stream;																			// Declares the variable output_stream as type ofstream
	string filename;																				// Declares the variable filename as string type

	struct favorites {																				// Declares a new structure of name favorites
		string name, color, movie, computerBrand;													// Declares the variables name, color, movie, and computerBrand as string type
		int number;																					// Declares the variable number as an integer type
	}person1, person2;																				// Declares the members of the structure as person1 and person2
		
	cout << "Person 1, enter name: " << endl;														// Prints "Person 1, enter name: " to the console, then ends the line.
	getline(cin, person1.name);																		// Requests a line of user input from console in (cin) to be stored in the string variable person1.name

	cout << endl << "Person 2, enter name: " << endl;												// Ends the line, then prints "Person 2, enter name: " to the console, then ends the line.
	getline(cin, person2.name);																		// Requests a line of user input from console in (cin) to be stored in the string variable person2.name

	filename = person1.name+" and "+person2.name+".txt";											// Set the value of the string variable filename to the value of the string variable person1.name, + " and " + the value of the string variable person2.name

	cout << endl << person1.name << ", enter favorite color: " << endl;								// Ends the line, then prints the value of the string variable person1.name, which contains the first person's name, then prints ", enter favorite color." to the console, then ends the line
	getline(cin, person1.color);																	// Request a line of user input from console in (cin), and store it in the string variable person1.color
	cout << person1.name << ", enter favorite number: " << endl;									// Prints the value of the string variable person1.name, which contains the first person's name, then prints ", enter favorite number." to the console, then ends the line
	cin >> person1.number;																			// Requests input to the integer variable person1.number, then waits for the user to press return
	cout << person1.name << ", enter favorite movie: " << endl;										// Prints the value of the string variable person1.name, which contains the first person's name, then prints ", enter favorite movie." to the console, then ends the line
	cin.ignore();																					// Removes the newline character ('/n') left behind by the last console in (cin) function, so that a newline can be recorded.
	getline(cin, person1.movie);																	// Request a line of user input from console in (cin), and store it in the string variable person1.movie
	cout << person1.name << ", enter favorite computer brand: " << endl;							// Prints the value of the string variable person2.name, which contains their name, and then prints ", enter favorite computer brand." to the console, then ends the line.
	getline(cin, person1.computerBrand);															// Request a line of user input from console in (cin), and store it in the string variable person1.computerBrand

	cout << endl << person2.name << ", enter favorite color: " << endl;								// Ends the line, then prints the value of the string variable person2.name, which contains the second person's name, then prints ", enter favorite color." to the console, then ends the line
	getline(cin, person2.color);																	// Request a line of user input from console in (cin), and store it in the string variable person2.color
	cout << person2.name << ", enter favorite number: " << endl;									// Prints the value of the string variable person2.name, which contains the second person's name, then prints ", enter favorite number." to the console, then ends the line
	cin >> person2.number;																			// Requests input to the integer variable person1.number, then waits for the user to press return
	cout << person2.name << ", enter favorite movie: " << endl;										// Prints the value of the string variable person2.name, which contains the second person's name, then prints ", enter favorite movie." to the console, then ends the line
	cin.ignore();																					// Removes the newline character ('/n') left behind by the last console in (cin) function, so that a newline can be recorded.
	getline(cin, person2.movie);																	// Request a line of user input from console in (cin), and store it in the string variable person2.movie
	cout << person2.name << ", enter favorite computer brand: " << endl;							// Prints the value of the string variable person2.name, which contains their name, and then prints ", enter favorite computer brand." to the console, then ends the line.
	getline(cin, person2.computerBrand);															// Request a line of user input from console in (cin), and store it in the string variable person2.computerBrand

	cout << endl << endl << person1.name << "'s Favorites";											// Skips a line, then prints the value of the string variable, person2.name, which contains the second person's name, then prints "'s Favorites" to the console.
	cout << endl << "Color:				" << person1.color;											// Ends the line, then prints "Color:				" to the console.
	cout << endl << "Number:				" << person1.number;									// Ends the line, then prints "Number				" to the console.
	cout << endl << "Movie:				" << person1.movie;											// Ends the line, then prints "Movie:				" to the console.
	cout << endl << "Computer Brand:			" << person1.computerBrand;							// Ends the line, then prints "Computer Brand:			" to the console, then skips a line.

	cout << endl << endl << person2.name << "'s Favorites";											// Skips a line, then prints the value of the string variable, person2.name, which contains the second person's name, then prints "'s Favorites" to the console.
	cout << endl << "Color:				" << person2.color;											// Ends the line, then prints "Color:				" to the console.
	cout << endl << "Number:				" << person2.number;									// Ends the line, then prints "Number				" to the console.
	cout << endl << "Movie:				" << person2.movie;											// Ends the line, then prints "Movie:				" to the console.
	cout << endl << "Computer Brand:			" << person2.computerBrand << endl << endl;			// Ends the line, then prints "Computer Brand:			" to the console, then skips a line.

	output_stream.open(filename);																	// Open the filename contaned in the string variable filename, and store it in the ofstream variable output_stream

	if(output_stream.fail()){																		// If the file could not be opened, do this code
		cout << "The file could not be opened." << endl;											// Prints "The file could not be opened." to the console, then ends the line
		system("pause");																			// Pauses the output until any key is pressed
		exit(0);																					// Closes the program and returns 0
	}																								// EndIf

	output_stream << person1.name << "'s Favorites";												// Print the value of the string variable 
	output_stream << endl << "Color:				" << person1.color;
	output_stream << endl << "Number:				" << person1.number;
	output_stream << endl << "Movie:				" << person1.movie;
	output_stream << endl << "Computer Brand:			" << person1.computerBrand;

	output_stream << endl << endl << person2.name << "'s Favorites";
	output_stream << endl << "Color:				" << person2.color;
	output_stream << endl << "Number:				" << person2.number;
	output_stream << endl << "Movie:				" << person2.movie;
	output_stream << endl << "Computer Brand:			" << person2.computerBrand;

	cout << "Press a key to exit.";
	
	system("pause>nul");
	exit(0);


}