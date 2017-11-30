/**
* \file Component.h
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
#include "RodEndSink.h"
#include "RodEndSource.h"
#include "LeverEndSink.h"
#include "LeverEndSource.h"
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

	/**
	* Sets machine pointer that component relates to 
	* \param machine Machine that component is a part of
	*/
	void SetMachine(CActualMachine *machine);

	/**
	* Sets rotation of component
	* \param rotation Rotation value of component
	*/
	virtual void CComponent::SetRotation(double rotation);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \ param x X location of part
	* \param y Y location of part
	*/
	virtual void DrawPart(Gdiplus::Graphics *graphics, int x, int y)=0;

	/**
	* Sets machine frame number
	* \param frame set machine frame number 
	*/
	void SetFrame(int frame);

	/**
	* Sets location of of component
	* \param x X part of location to set
	* \param y Y part of location to set
	*/
	void SetLocation(int x, int y);

	/**
	* Returns the x part of location
	* \return location of x value of component
	*/
	int GetX() { return mLocation.X; }

	/**
	* Returns the y part of location
	* \return location of y value of component
	*/
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

	///speed of a component
	double mSpeed;



};

