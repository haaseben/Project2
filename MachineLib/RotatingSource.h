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

	/**
	* updates rotation of connected sink
	* \param rotation New Rotaton of connection
	*/
	void UpdateRotation(double rotation);

	/**
	* Adds relation between sink and source
	* \param rotate Sink to be added to source
	*/
	void AddRotatingSink(CRotatingSink* rotate);

	/**
	* Sets speed of sink
	* \param speed New Speed of component
	*/
	void SetSpeed(double speed);

private:
	///pointer to sink this rotates
	CRotatingSink* mRotatingSink=nullptr;
};

