/**
* \file RotatingSource.h
*
* \author Ben Haase
*
* Class that represents a rotating source.
*
*/
#pragma once
#include "Source.h"
class CRotatingSink;

/*
* Class that represents a rotating source.
*
*/
class CRotatingSource: public CSource
{
public:
	/** Copy constructor disabled */
	CRotatingSource(const CRotatingSource &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRotatingSource &) = delete;
	CRotatingSource();
	virtual ~CRotatingSource();

	void UpdateRotation(double rotation);

	void AddRotatingSink(CRotatingSink* rotate);

	void SetSpeed(double speed);

private:
	///pointer to sink this rotates
	CRotatingSink* mRotatingSink=nullptr;
};

