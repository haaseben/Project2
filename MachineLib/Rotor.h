/**
* \file Rotor.h
*
* \author Ben Haase
*
* Class that represents a rotor for a machine.
*
*/
#pragma once
#include "Component.h"
/**
* Class that represents a rotor for a machine.
*/
class CRotor :
	public CComponent
{
public:
	/** Copy constructor disabled */
	CRotor(const CRotor &) = delete;
	CRotor();
	virtual ~CRotor();

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \param x X location of part
	* \param y Y location of part
	*/
	void CRotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

