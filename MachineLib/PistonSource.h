/**
* \file PistonSource.h
*
* \author Ben Haase
*
* Class that represents a piston source.
*
*/
#pragma once
#include "Source.h"

class CPistonSink;

/**
* Class that represents a piston source.
*/
class CPistonSource :
	public CSource
{
public:
	/** Copy constructor disabled */
	CPistonSource(const CPistonSource &) = delete;
	/** Assignment operator disabled */
	void operator=(const CPistonSource &) = delete;

	CPistonSource();
	virtual ~CPistonSource();

	/**
	* updates location of connected sink
	* \param location New location of connection
	*/
	void UpdateLocation(Gdiplus::Point location);

	/**
	* Adds relation between sink and source
	* \param sink Sink to be added to source
	*/
	void AddPistonSink(CPistonSink* sink);

private:
	
	CPistonSink* mPistonSink = nullptr;  ///< The rotation sink for this component
};