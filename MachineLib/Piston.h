/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a piston for a machine.
*
*/
#pragma once
#include "Component.h"
#include "Negotiate.h"

/**
* Class that represents a piston for a machine.
*
*/
class CPiston :
	public CNegotiate
{
public:
	/** Copy constructor disabled */
	CPiston(const CPiston &) = delete;
	/** Assignment operator disabled */
	void operator=(const CPiston &) = delete;
	CPiston();
	virtual ~CPiston();

	void CPiston::Negotiate(CRod *rod);

	void CPiston::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

