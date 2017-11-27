/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a rod for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a rod for a machine.
*
*/
class CRod :
	public CComponent
{
public:
	CRod();
	virtual~CRod();

	void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

