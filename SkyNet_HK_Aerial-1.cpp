// SkyNet_HK_Aerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int searchGridHighNumber = 64;
int searchGridLowNumber = 0;
int attempts = 0;//making a counter for tries
int human_guess


int main()
{
	srand(static_cast<unsigned int>(time(0))); //seeding a random number
	int human_scum = rand() % 64 + 0; //i guess this is how to apply arguements for rand function
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 0;
	int HK_Sftwr_guess = rand() % 64 + 0;
	int guess = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
	cout << "The enemy is hiding at grid " << human_scum;
	guess;//do the equation
	++attempts;//counting the attempts
	while (guess != human_scum)       //a while loop
	{
		if (guess < human_scum)
		{//if the guess is too low, redo guess starting at 1 number above the guess
			searchGridLowNumber = guess + 1;//resetting the grid low number based on the guess
			cout << "SkyNet HK searching for human scum\n";
			cout << "Target location estimate of " << guess << "was too low.\n";
			cout << "new searchGridLowNumber = " << searchGridLowNumber << "\n";
		}
		else if (guess > human_scum)
		{//if the guess is too high, redo guess starting at 1 number below the guess
			searchGridHighNumber = guess - 1; //resetting the grid low number based on the gues
			cout << "Skynet HK searching for human scum\n";
			cout << "Target location estimate of " << guess << "was too high.\n";
			cout << "new searchGridHighNumber = " << searchGridHighNumber << "\n";
		}
		
		else if (guess = human_scum);//if the guess is correct, print the following
		{
			cout << "SkyNet HK found enemy at grid #" << human_scum << "\n";
			break;//keeps the while loop from continuing even after its found the right answer
		}
	}
	while (HK_Sftwr_guess != human_scum)
	{
		cout << "SkyNet Software was wrong!\n";
		if (HK_Sftwr_guess = human_scum)
		{
			cout << "SkyNet HK Software took"<< attempts << "tries to find enemy at grid square " << human_scum << "!\n";
		}
	}system("pause");
    return 0;
}

