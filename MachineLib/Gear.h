/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a gear for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a gear for a machine.
*
*/
class CGear :
	public CComponent
{
public:
	/** Assignment operator disabled */
	void operator=(const CGear &) = delete;
	/** Copy constructor disabled */
	CGear(const CGear &) = delete;
	CGear(int radius,int teeth);
	virtual ~CGear();

	void CGear::MeshGear(std::shared_ptr<CGear> gear, double offset);

	void CGear::DrawPart(Gdiplus::Graphics *graphics, int x, int y) ;

	CRotatingSink* GetSink() { return &mRotatingSink; }

	CRotatingSource* GetSource() { return &mRotatingSource; }

	double GetNumTeeth() { return mNumTeeth; }

	void CGear::SetRotation(double rotation);

private:
	///radius of the gear
	int mRadius;

	///num of teeth on the gear
	int mNumTeeth;

	///pointer to what this rotates
	CRotatingSource mRotatingSource;

	///pointer to this being a sink for something else
	CRotatingSink mRotatingSink;

	///rotation angle of gear
	double mRotation;

	///phase at where the gear is in rotation
	double mPhase;
};

