/**
* \file Arm.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Arm.h"

/**
* Constructor
*/
CArm::CArm(int length)
{
	mLength = length;
	mSink.SetComponent(this);
}

/** Destructor */
CArm::~CArm()
{
}

void CArm::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}