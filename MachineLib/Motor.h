/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a motor for a machine.
*
*/
#pragma once
#include "Component.h"

class CActualMachine;
/**
* Class that represents a motor for a machine.
*
*/
class CMotor :
	public CComponent
{
public:
	CMotor();
	virtual ~CMotor();

	void ComputeRevs(int framerate, int framenum);

	double GetRotation();

	void SetTime(double time);

	void MotorSpeed(double speed);

private:
	///current time
	double mTime;

	///current revolutions
	double mRevs;

	///pointer to actual machine
	CActualMachine* mActualMachine;
};
