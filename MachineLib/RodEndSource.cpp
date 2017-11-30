/**
* \file RodEndSource.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "RodEndSource.h"
#include "RodEndSink.h"

/**
* Constructor
*/
CRodEndSource::CRodEndSource()
{
}

/** Destructor */
CRodEndSource::~CRodEndSource()
{
}

void CRodEndSource::UpdateLocation(Gdiplus::Point location)
{
	if (mRodEndSink != nullptr)
	{
		mRodEndSink->MatchSourceLocation(location);
	}
}

void CRodEndSource::AddRodEndSink(CRodEndSink* sink)
{
	mRodEndSink = sink;
	sink->AddRodEndSource(this);
}