/**
* \file Rod.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Rod.h"

/**
* Constructor
* \param length Length of the rod
*/
CRod::CRod(double length)
{
	mLength = length;
	mRodEndSink.SetComponent(this);
	mLeverEndSource.SetComponent(this);
	mPistonSource.SetComponent(this);
	mLeverEndSink.SetComponent(this);
}

/** Destructor */
CRod::~CRod()
{
}

void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	mLeverEndSource.UpdateLocation(this);

	DrawPolygon(graphics, x+GetX(), y+GetY());
}