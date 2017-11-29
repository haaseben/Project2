/**
* \file ActualMachineOneFactory.h
*
* \author Ben Haase
*
*  factory for building machine one.
*/
#pragma once
#include "ActualMachineFactory.h"
class CShape;

/**
*  factory for building machine one.
*/
class ActualMachineOneFactory :
	public CActualMachineFactory
{
public:
	/** Copy constructor disabled */
	ActualMachineOneFactory(const ActualMachineOneFactory &) = delete;
	ActualMachineOneFactory();
	virtual ~ActualMachineOneFactory();

	std::shared_ptr<CActualMachine> Create();
};

