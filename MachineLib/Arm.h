/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents an arm for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents an arm for a machine.
*
*/
class CArm :
	public CComponent
{
public:
	CArm();
	virtual ~CArm();
};

