/**
* \file Rotor.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Rotor.h"

/**
* Constructor
*/
CRotor::CRotor()
{
}

/** Destructor */
CRotor::~CRotor()
{
}


void CRotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}