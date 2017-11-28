/**
* \file RotatingSink.h
*
* \author Ben Haase
*
* Class that represents a rotating source.
*
*/
#pragma once
#include "RotatingSource.h"
class CRotatingSource;

/*
* Class that represents a rotating sink.
*
*/
class CRotatingSink
{
public:
	CRotatingSink();
	~CRotatingSink();

	void AddRotatingSource(CRotatingSource* rotate);

private:
	///pointer to source that rotates this sink
	CRotatingSource* mRotatingSource;
};

