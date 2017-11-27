#include "stdafx.h"
#include "Rod.h"

/**
* Constructor
*/
CRod::CRod()
{
}

/** Destructor */
CRod::~CRod()
{
}

void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}