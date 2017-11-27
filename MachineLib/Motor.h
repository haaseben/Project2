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

	void CMotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y) ;

private:
	///current time
	double mTime;

	///current revolutions
	double mRevs;

	///current speed
	double mSpeed;

	///pointer to actual machine
	CActualMachine* mActualMachine;
};

