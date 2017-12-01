/**
* \file LeverEndSink.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "LeverEndSink.h"
#include "Negotiate.h"
#include "LeverEndSource.h"
#include "Rod.h"

/**
* Constructor
*/
CLeverEndSink::CLeverEndSink()
{
}

/** Destructor */
CLeverEndSink::~CLeverEndSink()
{
}

void CLeverEndSink::SetNegotiator(CNegotiate *negotiator)
{
	mNegotiator = negotiator;
	SetComponent(negotiator);
}

void CLeverEndSink::AddLeverEndSource(CLeverEndSource* source)
{
	mLeverEndSource = source;
}

void CLeverEndSink::MatchSourceLocation(Gdiplus::Point location)
{
	GetComponent()->SetLocation(location.X, location.Y);
}

double CLeverEndSink::Negotiate(CRod* rod)
{
	mNegotiator->Negotiate(rod);
	return 0.0;
}