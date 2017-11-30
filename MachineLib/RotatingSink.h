/**
* \file RotatingSink.h
*
* \author Ben Haase
*
* Class that represents a rotating source.
*
*/
#pragma once
#include "Sink.h"

class CComponent;
class CRotatingSource;

/*
* Class that represents a rotating sink.
*
*/
class CRotatingSink: public CSink
{
public:
	/** Copy constructor disabled */
	CRotatingSink(const CRotatingSink &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRotatingSink &) = delete;
	CRotatingSink();
	virtual ~CRotatingSink();

	/**
	* Adds relation between sink and source
	* \param rotate Rotate to be added to sink
	*/
	void AddRotatingSource(CRotatingSource* rotate);


	/**
	* Matches source rotation
	* \param rotation New rotation of connection
	*/
	void MatchSourceRotation(double rotation);


	/**
	* Matches source speed
	* \param speed New speed of connection
	*/
	void CRotatingSink::MatchSourceSpeed(double speed);

private:
	///pointer to source that rotates this sink
	CRotatingSource* mRotatingSource=nullptr;

	///speed of source for this sink
	double mAngularSpeed;

	///rotation of source for this sink
	double mRotation;

};

