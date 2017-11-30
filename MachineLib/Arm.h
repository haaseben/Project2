/**
* \file Arm.h
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

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CRotatingSink* GetSink() { return &mRotatingSink; }

	/**
	* Returns the source that needs to be set for a sink to be set
	* \return source to set
	*/
	CRodEndSource* GetRodEndSource() { return &mRodEndSource; }

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \ param x X location of part
	* \param y Y location of part
	*/
	void CArm::DrawPart(Gdiplus::Graphics *graphics, int x, int y);


private:
	///length of  the arm
	double mLength;

	///where the arm is currently in rotation
	Gdiplus::Point mArmEndLocation;

	CRotatingSink mRotatingSink;    ///< The rotation sink for this component

	CRodEndSource mRodEndSource;  ///< The rod end source for this component
};

