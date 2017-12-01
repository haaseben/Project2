/**
* \file Piston.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Piston.h"

/**
* Constructor
*/
CPiston::CPiston()
{
	mPistonSink.SetComponent(this);
}

/** Destructor */
CPiston::~CPiston()
{
}

void CPiston::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x+GetX(), y+GetY());
}

void CPiston::Negotiate(CRod *rod)
{

}