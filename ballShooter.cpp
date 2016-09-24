/*
 * ballShooter.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: nidhi
 */

#include <iostream>
using namespace std;
int main()
{
	Shooter* myShooter = new Shooter(1,2);
	myShooter->shootBall();

	//if intake class was created
	/**
	 * Intake* myIntake = new Intake(3,4);
	 * bool intakeVal = myIntake->intakeBall();
	 * if(intakeVal==true) {
	 * 		myShooter->shootBall();
	 * 		cout << "Ball shot!" << endl;
	 * 		}
	 *else //intakeVal is false
	 *{
	 *	cout << "no ball acquired" << endl;
	 *}
		*/
	delete myShooter;
	return 0;
}

