/**
* \file ActualMachineTwoFactory.h
*
* \author Ben Haase
*
*  factory for building machine two.
*/
#pragma once
#include "ActualMachineFactory.h"

/**
*  factory for building machine two.
*/
class CActualMachineTwoFactory :
	public CActualMachineFactory
{
public:
	/** Copy constructor disabled */
	CActualMachineTwoFactory(const CActualMachineTwoFactory &) = delete;
	CActualMachineTwoFactory();
	virtual ~CActualMachineTwoFactory();

	std::shared_ptr<CActualMachine> Create();
};

