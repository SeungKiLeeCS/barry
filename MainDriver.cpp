/***********************************************************
 * MainDriver.cpp
 *
 * This file is used for CSE 1342 - Lab 1. It will use the
 * TestClass class to create an object that
 * can play "guess a number" game 
 *
 ***********************************************************/

#include <iostream>
// undefined reference to `TestClass::getguess()` -> included TestClass.cpp
// source : https://stackoverflow.com/questions/39759541/undefined-reference-to-classclass-error
#include "TestClass.cpp"
using namespace std;

int main (void) {
	// create an object of type TestClass
	TestClass anObject;
	bool flag = false;
	while (flag == false)
	{
		anObject.getguess();
		// missing s for the function checkguess() -> added s
		flag = anObject.checkguess();
	}
	// missing " at the end of a cout statement. -> added "
    cout << "Thanks for playing \n" << endl;
    return 0;}

