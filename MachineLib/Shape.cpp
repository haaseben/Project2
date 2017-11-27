#include "stdafx.h"
#include "Shape.h"

/**
* Constructor
*/
CShape::CShape()
{
}

/** Destructor */
CShape::~CShape()
{
}

void CShape::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x, y);
}