/**
* \file Piston.h
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

	/**
	* Negotiates between a rod and piston
	* \param rod Rod that will be used
	*/
	void CPiston::Negotiate(CRod *rod);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \ param x X location of part
	* \param y Y location of part
	*/
	void CPiston::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

