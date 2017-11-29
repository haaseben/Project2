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
	/** Copy constructor disabled */
	CActualMachineFactory(const CActualMachineFactory &) = delete;
	virtual ~CActualMachineFactory();

	/** Create the machine
	* \returns New actor object */
	virtual std::shared_ptr<CActualMachine> Create() = 0;

protected:
	CActualMachineFactory();
};