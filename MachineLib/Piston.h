/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a piston for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a piston for a machine.
*
*/
class CPiston :
	public CComponent
{
public:
	CPiston();
	virtual ~CPiston();
};

