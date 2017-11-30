/**
* \file LeverEndSource.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "LeverEndSource.h"
#include "LeverEndSink.h"
#include "Negotiate.h"

/**
* Constructor
*/
CLeverEndSource::CLeverEndSource()
{
}

/** Destructor */
CLeverEndSource::~CLeverEndSource()
{
}

void CLeverEndSource::UpdateLocation(Gdiplus::Point location)
{
	if (mLeverEndSink != nullptr)
	{
		mLeverEndSink->MatchSourceLocation(location);
	}
}

void CLeverEndSource::AddLeverEndSink(CLeverEndSink* sink)
{
	mLeverEndSink = sink;
	sink->AddLeverEndSource(this);
}