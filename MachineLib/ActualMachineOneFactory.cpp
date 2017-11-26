#include "stdafx.h"
#include "ActualMachineOneFactory.h"

/**
* Constructor
*/
ActualMachineOneFactory::ActualMachineOneFactory()
{
}

/** Destructor */
ActualMachineOneFactory::~ActualMachineOneFactory()
{
}

/** This is a concrete factory method that creates our machine one.
* \returns Pointer to a machine object.
*/
std::shared_ptr<CActualMachine> ActualMachineOneFactory::Create()
{
	shared_ptr<CActualMachine> machine = make_shared<CActualMachine>(1);



	return machine;
}