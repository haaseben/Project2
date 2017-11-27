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
	CGear(int radius,int teeth);
	virtual ~CGear();

	void CGear::DrawPart(Gdiplus::Graphics *graphics, int x, int y) ;

private:
	///radius of the gear
	int mRadius;

	///num of teeth on the gear
	int mNumTeeth;
};

