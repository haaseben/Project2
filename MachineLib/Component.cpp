#include "stdafx.h"
#include "Component.h"
#include "ActualMachine.h"

/**
* Constructor
*/
CComponent::CComponent()
{
}

/** Destructor */
CComponent::~CComponent()
{
}

void CComponent::SetMachine(CActualMachine *machine)
{
	mActualMachine = machine;
}

void CComponent::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	mLocation = Gdiplus::Point(x, y);
	DrawPolygon(graphics, mLocation.X, mLocation.Y);
}

void CComponent::SetFrame(int frame)
{

}