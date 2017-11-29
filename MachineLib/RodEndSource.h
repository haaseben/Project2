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

	void UpdateLocation(Gdiplus::Point location);

	void AddRodEndSink(CRodEndSink* sink);

private:
	///pointer to sink this rotates
	CRodEndSink* mRodEndSink = nullptr;
};

