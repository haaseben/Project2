/**
* \file PistonSink.h
*
* \author Ben Haase
*
* Class that represents a rod end sink.
*
*/
#pragma once
#include "Sink.h"
#include "Component.h"

class CPistonSource;
/**
* Class that represents a rod end sink.
*
*/
class CPistonSink :
	public CSink
{
public:
	/** Copy constructor disabled */
	CPistonSink(const CPistonSink &) = delete;
	/** Assignment operator disabled */
	void operator=(const CPistonSink &) = delete;

	CPistonSink();
	virtual ~CPistonSink();

	/**
	* Adds relation between sink and source
	* \param source Source to be added to sink
	*/
	void AddPistonSource(CPistonSource* source);

	/**
	* Matches source location
	* \param location New location of connection
	*/
	void MatchSourceLocation(Gdiplus::Point location);

private:
	
	CPistonSource* mPistonSource = nullptr;  ///< The rotation sink for this component
}; 

