//Author: David Prater

 
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Class.hpp"
#include "Calculations.cpp"
#include "inputOutput.cpp"

using namespace std;

int main(){
	inputOutput n;
	cout << "The last users name was ";
	n.readFile();
	cout << endl;
	n.writeFile();
	
	calculations m;
	
	cout << "The square root of your favorite number is "<< m.squareRoot() << endl;
	cout << "You are " << m.inputAge() << " years old."<< endl;
	
	
	
	
	
	string currentRoom = "livingRoom";
	string alive = "true";
	char keyPressed;
	
	while(alive == "true")
	{
		if (currentRoom == "livingRoom")
		{
			cout << "You are in the living room. There are doors to the north (n) east (e) south (s) and west (w) " << endl;
			cin >> keyPressed;
			if (keyPressed == ('n')){
				currentRoom = "bathroom";}
			else if (keyPressed == 'e'){
				currentRoom = "patio";}
			else if (keyPressed == 's'){
				currentRoom = "kitchen";}
			else if (keyPressed == 'w'){
				currentRoom = "bedroom";}
			else if (keyPressed == ('q')){
				cout << "Goodbye!" << endl;
				break;}		
		}
		else if (currentRoom == "kitchen")
		{
			cout << "You are in the kitchen. There is a door to the north (n) " << endl;
			cin >> keyPressed;
			if (keyPressed == ('n')){
				currentRoom = "livingRoom";}
			else if (keyPressed == ('q')){
				cout << "Goodbye!" << endl;
				break;}	
		}
		else if (currentRoom == "bathroom")
		{
			cout << "You are in the bathroom. There is a door to the south (s) " << endl;
			cin >> keyPressed;
			if (keyPressed == ('s')){
				currentRoom = "livingRoom";}
			else if (keyPressed == ('q')){
				cout << "Goodbye!" << endl;
				break;}		
		}
		else if (currentRoom == "bedroom")
		{
			cout << "You are in the bedroom. There is a door to the east (e) " << endl;
			cin >> keyPressed;
			if (keyPressed == ('e')){
				currentRoom = "livingRoom";}
			else if (keyPressed == ('q')){
				cout << "Goodbye!" << endl;
				break;}		
		}
		else if (currentRoom == "patio")
		{
			cout << "You are in the patio. There are doors to the east (w) and south (s) " << endl;
			cin >> keyPressed;
			if (keyPressed == ('w')){
				currentRoom = "livingRoom";}
			if (keyPressed == ('s')){
				currentRoom = "backyard";}
			else if (keyPressed == ('q')){
				cout << "Goodbye!" << endl;
				break;}		
		}
		else if (currentRoom == "backyard")
		{
			cout << "You entered your backyard and found the princess!" << endl;
			cout << "Goodbye!" << endl;
			break;

		}	

	
}

	return 0;
}
