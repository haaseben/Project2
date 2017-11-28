/**
* \file Component.cpp
*
* \author Ben Haase
*/
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

//void CComponent::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
//{
//
//}

void CComponent::SetFrame(int frame)
{

}

void CComponent::SetLocation(int x, int y)
{
	mLocation = Gdiplus::Point(x,y);
}