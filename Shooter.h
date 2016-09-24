/*
 * Shooter.h
 *
 *  Created on: Sep 22, 2016
 *      Author: Pandyas
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_
#include "Motor.h"

class Shooter {
public:
	Motor* leftMotor;
	Motor* rightMotor;
	Shooter();
	Shooter(int right, int left);
	virtual ~Shooter();
	void shootBall();
};

#endif /* SHOOTER_H_ */
