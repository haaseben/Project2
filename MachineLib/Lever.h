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

	void CLever::DrawPart(Gdiplus::Graphics *graphics, int x, int y);

	void CLever::Negotiate(CRod *rod);

	CLeverEndSink* GetSink() { return &mLeverEndSink; }

private:

	///length of lever
	double mLength;

	///representation of this lever being a sink for a rod 
	CLeverEndSink mLeverEndSink;
};

