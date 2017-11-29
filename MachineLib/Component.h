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
#include "RotatingSink.h"
#include "RotatingSource.h"
class CSink;
class CSource;
class CActualMachine;

/**
* Class that represents a component for a machine.
*/
class CComponent :
	public CPolygon
{
public:
	/** Assignment operator disabled */
	void operator=(const CComponent &) = delete;
	/** Copy constructor disabled */
	CComponent(const CComponent &) = delete;
	CComponent();
	virtual ~CComponent();

	void SetMachine(CActualMachine *machine);

	virtual void CComponent::SetRotation(double rotation);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	*/
	virtual void DrawPart(Gdiplus::Graphics *graphics, int x, int y)=0;

	void SetFrame(int frame);

	void SetLocation(int x, int y);

	int GetX() { return mLocation.X; }

	int GetY() { return mLocation.Y; }

	

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

