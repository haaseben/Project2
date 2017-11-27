#include "stdafx.h"
#include "Shape.h"


CShape::CShape()
{
}


CShape::~CShape()
{
}

void CShape::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	SetLocation(x, y);
	DrawPolygon(graphics, x, y);
}