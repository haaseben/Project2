/**
* \file Rod.h
*
* \author Ben Haase
*
* Class that represents a rod for a machine.
*
*/
#pragma once
#include "Component.h"

/**
* Class that represents a rod for a machine.
*
*/
class CRod :
	public CComponent
{
public:
	/** Copy constructor disabled */
	CRod(const CRod &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRod &) = delete;
	CRod(double length);
	virtual~CRod();

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \param x X location of part
	* \param y Y location of part
	*/
	void CRod::DrawPart(Gdiplus::Graphics *graphics, int x, int y);

	/**
	* Returns the sink that needs to be set for a source
	* \return sink to be set
	*/
	CRodEndSink* GetSink() { return &mRodEndSink; }

	/**
	* Returns the source that needs to be set for a sink to be set
	* \return sink to be set
	*/
	CLeverEndSource* GetLeverEndSource() { return &mLeverEndSource; }

	/**
	* Returns the source that needs to be set for a sink to be set
	* \return sink to be set
	*/
	CPistonSource* GetPistonSource() { return &mPistonSource; }


	/**
	* Returns the source that needs to be set for a sink to be set
	* \return sink to be set
	*/
	CLeverEndSink* GetLeverEndSink() { return &mLeverEndSink; }

	/**
	* Returns length of rod
	* \return length of rod
	*/
	double GetLength() { return mLength; }


private:
	///length of the rod
	double mLength;

	CRodEndSink mRodEndSink;   ///< The rod end sink for this component

	CLeverEndSource mLeverEndSource;  ///< The rod end source for this component

	CPistonSource mPistonSource;  ///< The rod end source for this component

	CLeverEndSink mLeverEndSink;  ///< The rod end source for this component
};

