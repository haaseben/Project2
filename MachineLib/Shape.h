/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a shape for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a shape for a machine.
*
*/
class CShape :
	public CComponent
{
public:
	CShape();
	virtual ~CShape();

	void DrawPart(Gdiplus::Graphics *graphics, int x, int y);

private:
	Gdiplus::Point mRotationOrigin;
	double mRotation;
	double mSpeed;
};