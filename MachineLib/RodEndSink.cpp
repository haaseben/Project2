/**
* \file RodEndSink.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "RodEndSink.h"
#include "Negotiate.h"
#include "RodEndSource.h"

/**
* Constructor
*/
CRodEndSink::CRodEndSink()
{
}

/** Destructor */
CRodEndSink::~CRodEndSink()
{
}

void CRodEndSink::SetNegotiator(CNegotiate *negotiator)
{
	mNegotiator = negotiator;
	SetComponent(negotiator);
}

void CRodEndSink::AddRodEndSource(CRodEndSource* source)
{
	mRodEndSource = source;
}

void CRodEndSink::MatchSourceLocation(Gdiplus::Point location)
{
	GetComponent()->SetLocation(location.X,location.Y);
}