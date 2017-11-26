/**
* \file ActualMachineFactory.h
*
* \author Ben Haase
*
* Abstract base class for machine factories.
*/
#pragma once
#include <memory>
#include "ActualMachine.h"
/**
* Abstract base class for machine factories.
*/
class CActualMachineFactory
{
public:
	virtual ~CActualMachineFactory();

	/** Create the actor
	* \returns New actor object */
	virtual std::shared_ptr<CActualMachine> Create() = 0;

protected:
	CActualMachineFactory();
};

