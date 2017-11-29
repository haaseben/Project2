/**
* \file Arm.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Arm.h"

/**
* Constructor
* \param length Length of arm
*/
CArm::CArm(int length)
{
	mLength = length;
	mRotatingSink.SetComponent(this);
	mRodEndSource.SetComponent(this);
}

/** Destructor */
CArm::~CArm()
{
}

void CArm::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x+GetX(), y+GetY());

	double PI2 = 3.14 * 2;

	double xPoint = GetX() + (mLength-7)*cos(GetRotation()*PI2);
	double yPoint= GetY() + (mLength-10)*sin(GetRotation()*PI2);

	mArmEndLocation = Gdiplus::Point((int)xPoint, (int)yPoint);

	mRodEndSource.UpdateLocation(mArmEndLocation);
}

