/**
* \file RealMachine.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "RealMachine.h"
#include "ActualMachine.h"
#include "ActualMachineOneFactory.h"
#include "ActualMachineTwoFactory.h"

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
	double time = GetTime();
	mActualMachine->SetTime(time);
}

void CRealMachine::SetSpeed(double speed)
{
	mSpeed = speed;
	mActualMachine->SetSpeed(speed);
}

void CRealMachine::SetFrameRate(double rate)
{
	mFrameRate = rate;
}

void CRealMachine::SetMachineNumber(int seed)
{
	mMachineNum=seed;
	if (seed = 1)
	{
		ActualMachineOneFactory machineone;
		mActualMachine = machineone.Create();
	}

	else if (seed = 2)
	{
		CActualMachineTwoFactory machinetwo;
		mActualMachine = machinetwo.Create();
	}
}

int CRealMachine::GetMachineNumber()
{
	return mMachineNum;
}

double CRealMachine::GetTime()
{
	int i = 0;
	double time;
	
	time= mFrameNum / mFrameRate;

	return time;
}