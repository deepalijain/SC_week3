/*
 * Shooter.cpp
 *
 *  Created on: Sep 22, 2016
 *      Author: Pandyas
 */

#include "Shooter.h"

Shooter::Shooter() {
	// TODO Auto-generated constructor stub

}

Shooter::Shooter(int left, int right){
	Motor left;
	Motor right;
}

Shooter::~Shooter() {
	// TODO Auto-generated destructor stub
left.delete();
right.delete();
}

void Shooter::shootBall(){
	//sets speed to 0.8
	left.setSpeed(0.8);
	right.setSpeed(0.8);

	//waits for 600 milliseconds
	left.wait(600);
	right.wait(600);

	//should have implemented brake in Motor class
	//call break here

}

