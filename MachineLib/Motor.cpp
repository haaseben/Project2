#include "stdafx.h"
#include "Motor.h"
#include "ActualMachine.h"

/** Constructor */
CMotor::CMotor()
{
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

}


void CMotor::MotorSpeed(double speed)
{
	mSpeed = speed;
}

void CMotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	int wid = 50;
	int hit = 20;
	SetLocation(x, y);
	Rectangle(x, y,wid,hit);
}