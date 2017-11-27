/**
* \file RealMachine.h
*
* \author Ben Haase
*
* Class that represents a component for a machine.
*
*/
#pragma once
#include "Polygon.h"

class CActualMachine;

/**
* Class that represents a component for a machine.
*/
class CComponent :
	public CPolygon
{
public:
	CComponent();
	virtual ~CComponent();

	virtual void SetMachine(CActualMachine *machine);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	*/
	virtual void DrawPart(Gdiplus::Graphics *graphics, int x, int y)=0;

	void SetFrame(int frame);

	void SetLocation(int x, int y);

private:
	///pointer to actual machine
	CActualMachine* mActualMachine=nullptr;

	///bool for components rotatability
	bool mIsRotatable = false;

	///location of Component
	Gdiplus::Point mLocation;

	///rotation of component
	double mRotation;
};

