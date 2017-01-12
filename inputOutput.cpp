// David Prater
// 11/2/2015
// Assignment 7
// Dungeon Game With File in and File out
 
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Class.hpp"

using namespace std;



void inputOutput::readFile()
{
	ifstream fileIn;
	string message;
	fileIn.open("dungeon.txt");
	getline(fileIn, message);
	cout << message;
	fileIn.close();
}

void inputOutput::writeFile()
{
	string firstName;
	string lastName;
	string fullName;
	
	ofstream fileOut;
	string message;
	fileOut.open("dungeon.txt");
	cout << "Whats your first name?" << endl;
	cin >> firstName;
	cout << "What is yout last name?" << endl;
	cin >> lastName;
	fullName = firstName + " " + lastName;
	fileOut << fullName;
	fileOut.close();
	
}
