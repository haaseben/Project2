#include "stdafx.h"
#include "ActualMachineTwoFactory.h"

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
	shared_ptr<CActualMachine> machine = make_shared<CActualMachine>(2);



	return machine;
}