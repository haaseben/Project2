/**
* \file Lever.h
*
* \author Ben Haase
*
* Class that represents a lever for a machine.
*
*/
#pragma once
#include "Component.h"
#include "Negotiate.h"

/**
* Class that represents a lever for a machine.
*
*/
class CLever :
	public CNegotiate
{
public:
	/** Copy constructor disabled */
	CLever(const CLever &) = delete;
	/** Assignment operator disabled */
	void operator=(const CLever &) = delete;
	CLever(double length);
	virtual ~CLever();

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \param x X location of part
	* \param y Y location of part
	*/
	void CLever::DrawPart(Gdiplus::Graphics *graphics, int x, int y);

	/**
	* Negotiates between a rod and lever
	* \param rod Rod that will be used
	*/
	void CLever::Negotiate(CRod *rod);

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CLeverEndSink* GetSink() { return &mLeverEndSink; }

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CLeverEndSource* GetSource() { return &mLeverEndSource; }

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CRotatingSource* GetRotationSource() { return &mRotationSource; }

private:

	///length of lever
	double mLength;

	///representation of this lever being a sink for a rod 
	CLeverEndSink mLeverEndSink;

	///representation of this lever being a sink for a rod 
	CLeverEndSource mLeverEndSource;

	///representation of this lever being a sink for a rod 
	CRotatingSource mRotationSource;
};

