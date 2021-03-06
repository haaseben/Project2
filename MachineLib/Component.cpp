/**
* \file Component.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Component.h"
#include "ActualMachine.h"
#include "Sink.h"
#include "Source.h"

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

void CComponent::SetFrame(int frame)
{

}

void CComponent::SetLocation(int x, int y)
{
	mLocation = Gdiplus::Point(x,y);
}

void CComponent::SetRotation(double rotation)
{
	CPolygon::SetRotation(rotation);
}
