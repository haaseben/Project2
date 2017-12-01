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
class CRod;

/**
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
	void UpdateLocation(CRod* rod);


	/**
	* Adds relation between sink and source
	* \param sink Sink to be added to source
	*/
	void AddLeverEndSink(CLeverEndSink* sink);

private:

	CLeverEndSink* mLeverEndSink = nullptr; ///< The rotation sink for this component
};

