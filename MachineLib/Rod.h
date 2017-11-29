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
	/** Copy constructor disabled */
	CRod(const CRod &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRod &) = delete;
	CRod();
	virtual~CRod();

	void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

