/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents an arm for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents an arm for a machine.
*
*/
class CArm :
	public CComponent
{
public:
	/** Copy constructor disabled */
	CArm(const CArm &) = delete;
	/** Assignment operator disabled */
	void operator=(const CArm &) = delete;
	CArm(int length);
	virtual ~CArm();

	void CArm::DrawPart(Gdiplus::Graphics *graphics, int x, int y);

private:
	///length of  the arm
	double mLength;

	CRotatingSink mSink;    ///< The rotation sink for this component
};

