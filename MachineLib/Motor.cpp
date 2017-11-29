/**
* \file Motor.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Motor.h"
#include "ActualMachine.h"

/** Constructor */
CMotor::CMotor()
{
	mSource.SetComponent(this);
}

/** Destructor */
CMotor::~CMotor()
{
}


void CMotor::ComputeRevs(int framerate, int framenum)
{

}


double CMotor::GetRotation()
{
	return 2.0;
}


void CMotor::SetTime(double time)
{
	mTime = time;
	SetRotation(time*mSpeed);

	mSource.UpdateRotation(time*mSpeed);
}


void CMotor::MotorSpeed(double speed)
{
	mSpeed = speed;
}

void CMotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics,x+GetX(),y+GetY());
}

