/**
* \file LeverEndSource.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "LeverEndSource.h"
#include "LeverEndSink.h"
#include "Negotiate.h"
#include "Rod.h"

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

void CLeverEndSource::UpdateLocation(CRod* rod)
{
	if (mLeverEndSink != nullptr)
	{
		mLeverEndSink->Negotiate(rod);
	}
}

void CLeverEndSource::AddLeverEndSink(CLeverEndSink* sink)
{
	mLeverEndSink = sink;
	sink->AddLeverEndSource(this);
}