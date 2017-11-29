/**
* \file RotatingSource.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "RotatingSource.h"
#include "RotatingSink.h"
/**
* Constructor
*/
CRotatingSource::CRotatingSource()
{
}

/** Destructor */
CRotatingSource::~CRotatingSource()
{
}


void CRotatingSource::UpdateRotation(double rotation)
{
	if (mRotatingSink != nullptr)
	{
		mRotatingSink->MatchSourceRotation(rotation);
	}
}

void CRotatingSource::AddRotatingSink(CRotatingSink* rotate)
{
	mRotatingSink = rotate;
	rotate->AddRotatingSource(this);
}

void CRotatingSource::SetSpeed(double speed)
{
	if (mRotatingSink != nullptr)
	{
		mRotatingSink;
	}
}