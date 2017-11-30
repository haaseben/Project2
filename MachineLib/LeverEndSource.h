/**
* \file LeverEndSource.h
*
* \author Ben Haase
*
* Class that represents a lever end source.
*
*/
#pragma once
#include "Source.h"

class CLeverEndSink;
class CNegotiate;

/*
* Class that represents a lever end source.
*/
class CLeverEndSource :
	public CSource
{
public:
	/** Copy constructor disabled */
	CLeverEndSource(const CLeverEndSource &) = delete;
	/** Assignment operator disabled */
	void operator=(const CLeverEndSource &) = delete;

	CLeverEndSource();
	virtual ~CLeverEndSource();

	void UpdateLocation(Gdiplus::Point location);

	void AddLeverEndSink(CLeverEndSink* sink);

private:
	///pointer to sink this rotates
	CLeverEndSink* mLeverEndSink = nullptr;
};

