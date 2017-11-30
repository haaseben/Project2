/**
* \file Gear.h
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
	/**
	* Sets speed of component connected to gear
	* \param speed Speed to set component to 
	* \ param offset Offset to mesh the gears
	*/
	void CGear::MeshGear(double speed, double offset);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \ param x X location of part
	* \param y Y location of part
	*/
	void CGear::DrawPart(Gdiplus::Graphics *graphics, int x, int y) ;

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CRotatingSink* GetSink() { return &mRotatingSink; }

	/**
	* Returns the source that needs to be set for a sink to be set
	* \return source to set
	*/
	CRotatingSource* GetSource() { return &mRotatingSource; }

	/**
	* Return gear number of teeth
	* \return gear number of teeth
	*/
	double GetNumTeeth() { return mNumTeeth; }

	/**
	* Sets rotation value
	* \param rotation New Rotation value 
	*/
	void CGear::SetRotation(double rotation);

	/**
	* Looks at sink and calls update for it
	* \param rotating Sink to be looked at 
	*/
	void ExamineSink(CRotatingSink rotating);

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

	///speed of connected sink to be updated to
	double mSpeed;
};

