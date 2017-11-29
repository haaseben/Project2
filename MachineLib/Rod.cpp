/**
* \file Rod.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Rod.h"

/**
* Constructor
*/
CRod::CRod(double length)
{
	mLength = length;
	mRodEndSink.SetComponent(this);
	mLeverEndSource.SetComponent(this);
}

/** Destructor */
CRod::~CRod()
{
}

void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x+GetX(), y+GetY());

	double PI2 = 3.14 * 2;

	double xPoint = GetX() + (mLength - 7)*cos(GetRotation()*PI2);
	double yPoint = GetY() + (mLength - 10)*sin(GetRotation()*PI2);

	mLeverEndSource.UpdateLocation(Gdiplus::Point(xPoint, yPoint));
}