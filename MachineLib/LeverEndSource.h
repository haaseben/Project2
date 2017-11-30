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

	/**
	* updates location of connected sink
	* \param location New location of connection
	*/
	void UpdateLocation(Gdiplus::Point location);


	/**
	* Adds relation between sink and source
	* \param sink Sink to be added to source
	*/
	void AddLeverEndSink(CLeverEndSink* sink);

private:
	///pointer to sink this rotates
	CLeverEndSink* mLeverEndSink = nullptr;
};
