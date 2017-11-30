/**
* \file RodEndSource.h
*
* \author Ben Haase
*
* Class that represents a rod end source.
*
*/
#pragma once
#include "Source.h"

class CRodEndSink;

/*
* Class that represents a rod end source.
*/
class CRodEndSource :
	public CSource
{
public:
	/** Copy constructor disabled */
	CRodEndSource(const CRodEndSource &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRodEndSource &) = delete;

	CRodEndSource();
	virtual ~CRodEndSource();

	/**
	* updates location of connected sink
	* \param location New location of connection
	*/
	void UpdateLocation(Gdiplus::Point location);

	/**
	* Adds relation between sink and source
	* \param sink Sink to be added to source
	*/
	void AddRodEndSink(CRodEndSink* sink);

private:
	///pointer to sink this rotates
	CRodEndSink* mRodEndSink = nullptr;
};

