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
	CArm(int length);
	virtual ~CArm();

	void CArm::DrawPart(Gdiplus::Graphics *graphics, int x, int y);

private:
	///length of  the arm
	double mLength;
};

