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
CLever::CLever()
{
}

/** Destructor */
CLever::~CLever()
{
}

void CLever::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}