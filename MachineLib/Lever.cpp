/**
* \file Lever.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Lever.h"

/**
* Constructor
*/
CLever::CLever(double length)
{
	mLength = length;
	mLeverEndSink.SetComponent(this);
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

}