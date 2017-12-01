/**
* \file Lever.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Lever.h"
#include "Rod.h"
#include <math.h>
#include <cmath>

/**
* Constructor
* \param length Length of lever
*/
CLever::CLever(double length)
{
	mLength = length;
	mLeverEndSink.SetComponent(this);
	mLeverEndSource.SetComponent(this);
	mRotationSource.SetComponent(this);
	mLeverEndSink.SetNegotiator(this);
}

/** Destructor */
CLever::~CLever()
{
}

void CLever::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x+GetX(), y+GetY());
}

void CLever::Negotiate(CRod *rod)
{
	Gdiplus::Point rod2 = rod->GetSink()->GetLocation();
	
	Gdiplus::Point lever = Gdiplus::Point(GetX(), GetY());

	double PI2 = 3.14 * 2;

	double a = mLength / 2;
	double b = rod->GetLength();
	double c = sqrt(pow((lever.Y - rod2.Y), 2) + pow((lever.X - rod2.X), 2));

	double beta = atan2(-(lever.Y - rod2.Y), (lever.X - rod2.X));
	double alpha = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b*c));

	double theta = beta - alpha;

	Gdiplus::Point endLever = Gdiplus::Point((rod2.X + b*cos(-(theta))), (rod2.Y + b*cos(-(theta))));

	double phi = -atan2((endLever.Y - lever.Y), (endLever.X - lever.X));

	rod->SetRotation(theta/PI2);

	SetRotation(phi/PI2);
}