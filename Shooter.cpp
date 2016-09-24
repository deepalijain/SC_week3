/*
 * Shooter.cpp
 *
 *  Created on: Sep 22, 2016
 *      Author: Pandyas
 */

#include "Shooter.h"

Shooter::Shooter() {
	// TODO Auto-generated constructor stub
	leftMotor = new Motor(0);
	rightMotor = new Motor(0);
}

Shooter::Shooter(int left, int right){
	leftMotor = new Motor(left);
	rightMotor = new Motor(right);
}

Shooter::~Shooter() {
	// TODO Auto-generated destructor stub
	delete leftMotor;
	delete rightMotor;
}

void Shooter::shootBall(){
	//sets speed to 0.8
	leftMotor->setSpeed(0.8);
	rightMotor->setSpeed(0.8);

	//waits for 600 milliseconds
	leftMotor->wait(600);
	rightMotor->wait(600);

	//should have implemented brake in Motor class
	//call break here

}

