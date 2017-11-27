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
	mTime = time;
}


void CMotor::MotorSpeed(double speed)
{
	mSpeed = speed;
}

void CMotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	CenteredSquare(100);
	SetImage(L"images/electric-wheel.png");
	DrawPolygon(graphics, x, y);
	SetImage(L"images/motor-frame.png");
	DrawPolygon(graphics, x, y);
}