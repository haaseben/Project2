/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a lever for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a lever for a machine.
*
*/
class CLever :
	public CComponent
{
public:
	CLever();
	virtual ~CLever();

	void CLever::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

