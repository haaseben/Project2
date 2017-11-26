/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a gear for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a gear for a machine.
*
*/
class CGear :
	public CComponent
{
public:
	CGear();
	virtual ~CGear();
};

