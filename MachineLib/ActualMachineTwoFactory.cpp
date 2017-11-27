#include "stdafx.h"
#include "ActualMachineTwoFactory.h"
#include "Shape.h"
#include "Rod.h"
#include "Arm.h"
#include "Motor.h"
#include "Piston.h"
#include "Lever.h"
#include "Gear.h"

using namespace Gdiplus;
/**
* Constructor
*/
CActualMachineTwoFactory::CActualMachineTwoFactory()
{
}

/** Destructor */
CActualMachineTwoFactory::~CActualMachineTwoFactory()
{
}

/** This is a concrete factory method that creates our machine one.
* \returns Pointer to a machine object.
*/
std::shared_ptr<CActualMachine> CActualMachineTwoFactory::Create()
{
	auto machine = make_shared<CActualMachine>(2);



	return machine;
}