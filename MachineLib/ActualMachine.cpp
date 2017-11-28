/**
* \file ActualMachine.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "ActualMachine.h"
#include "RealMachine.h"
#include "Component.h"
#include "Motor.h"
#include "ActualMachineOneFactory.h"
#include "ActualMachineTwoFactory.h"

/**
* Constructor
* \param machinenum Sets the machine to be built
*/
CActualMachine::CActualMachine(int machinenum):mMachineNum(machinenum)
{

}

/** Destructor */
CActualMachine::~CActualMachine()
{
}


void CActualMachine::DrawActualMachine(Gdiplus::Graphics *graphics,int x, int y)
{
	for (auto component : mComponents)
	{
		component->DrawPart(graphics, x, y);
	}
}

void CActualMachine::AddComponent(std::shared_ptr<CComponent> comp)
{
	mComponents.push_back(comp);
	comp->SetMachine(this);
}

void CActualMachine::SetTime(double time)
{
	mMotor->SetTime(time);
}