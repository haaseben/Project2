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

	void DrawPart(Gdiplus::Graphics *graphics, int x, int y);

private:
	///point of placement
	Gdiplus::Point mRotationOrigin;

	///rotational speed of shape
	double mRotation;

	///speed of the shape
	double mSpeed;

	CRotatingSink mSink;    ///< The rotation sink for this component
};