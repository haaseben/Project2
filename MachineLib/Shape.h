/**
* \file Shape.h
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
	/** Copy constructor disabled */
	CShape(const CShape &) = delete;
	/** Assignment operator disabled */
	void operator=(const CShape &) = delete;
	CShape();
	virtual ~CShape();

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \param x X location of part
	* \param y Y location of part
	*/
	void DrawPart(Gdiplus::Graphics *graphics, int x, int y);

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CRotatingSink* GetSink() { return &mSink; }

private:
	///point of placement
	Gdiplus::Point mRotationOrigin;

	///rotational speed of shape
	double mRotation;

	///speed of the shape
	double mSpeed;

	CRotatingSink mSink;    ///< The rotation sink for this component
};