/**
* \file PistonSource.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "PistonSource.h"
#include "PistonSink.h"

/**
* Constructor
*/
CPistonSource::CPistonSource()
{
}

/** Destructor */
CPistonSource::~CPistonSource()
{
}

void CPistonSource::UpdateLocation(Gdiplus::Point location)
{
	if (mPistonSink != nullptr)
	{
		mPistonSink->MatchSourceLocation(location);
	}
}

void CPistonSource::AddPistonSink(CPistonSink* sink)
{
	mPistonSink = sink;
	sink->AddPistonSource(this);
}
