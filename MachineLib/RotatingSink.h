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

	void AddRotatingSource(CRotatingSource* rotate);

	void MatchSourceRotation(double rotation);

	void CRotatingSink::MatchSourceSpeed(double speed);

private:
	///pointer to source that rotates this sink
	CRotatingSource* mRotatingSource=nullptr;

	///speed of source for this sink
	double mAngularSpeed;

	///rotation of source for this sink
	double mRotation;

};

