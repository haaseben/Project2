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
/*
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

	void CRotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y);
};

