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
*/
CActualMachine::CActualMachine(int machinenum):mMachineNum(machinenum)
{
	////if (machinenum == 1)
	////{
		ActualMachineOneFactory machineone;
		auto machine1 = machineone.Create();
		for (auto component : machine1->mComponents)
		{
			this->AddComponent(component);
		}
	////}

	///*else if (machinenum == 2)
	//{
	//	CActualMachineTwoFactory machinetwo;
	//	auto m2 = machinetwo.Create();
	//}*/

}

CActualMachine::CActualMachine()
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

}