// David Prater
// 11/2/2015
// Assignment 7
// Dungeon Game With File in and File out
 
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include "Class.hpp"

using namespace std;

double calculations::inputAge()
{
	int birthYear;
	cout << "What year were your born?" << endl;
	cin >> birthYear;
	age = 2015 - birthYear;
	return age;
}

double calculations::squareRoot()
{
	double number;
	cout << "What is your favorite number" << endl;
	cin >> number;
	square = sqrt(number);
	return square;
}
