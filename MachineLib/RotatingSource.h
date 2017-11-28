/**
* \file RotatingSource.h
*
* \author Ben Haase
*
* Class that represents a rotating source.
*
*/
#pragma once
class CRotatingSink;

/*
* Class that represents a rotating source.
*
*/
class CRotatingSource
{
public:
	CRotatingSource();
	virtual ~CRotatingSource();

	void UpdateRotation(double rotation);

	void AddRotatingSink(CRotatingSink* rotate);

private:
	///pointer to sink this rotates
	CRotatingSink* mRotatingSink;
};

