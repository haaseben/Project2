#include "stdafx.h"
#include "Piston.h"

/**
* Constructor
*/
CPiston::CPiston()
{
}

/** Destructor */
CPiston::~CPiston()
{
}

void CPiston::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}