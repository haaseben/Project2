/**
* \file RealMachine.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "RealMachine.h"
#include "ActualMachine.h"

/**
* Constructor
*/
CRealMachine::CRealMachine()
{
	mActualMachine = make_shared<CActualMachine>(1);
}

/** Destructor */
CRealMachine::~CRealMachine()
{
}

void CRealMachine::SetLocation(int x, int y)
{
	mLocation = Gdiplus::Point(x, y);
}

void CRealMachine::DrawMachine(Gdiplus::Graphics *graphics)
{
	mActualMachine->DrawActualMachine(graphics,mLocation.X,mLocation.Y);
}

void CRealMachine::SetMachineFrame(int frame)
{
	mFrameNum = frame;
}

void CRealMachine::SetSpeed(double speed)
{
	mSpeed = speed;
}

void CRealMachine::SetFrameRate(double rate)
{
	mFrameRate = rate;
}

void CRealMachine::SetMachineNumber(int seed)
{
	mMachineNum=seed;
}

int CRealMachine::GetMachineNumber()
{
	return mMachineNum;
}

double CRealMachine::GetTime()
{
	mStartTime = mFrameNum / mFrameRate;
	return mStartTime;
}