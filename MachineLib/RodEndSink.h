/**
* \file RodEndSink.h
*
* \author Ben Haase
*
* Class that represents a rod end sink.
*
*/
#pragma once
#include "Sink.h"

class CNegotiate;
class CRodEndSource;
/*
* Class that represents a rod end sink.
*
*/
class CRodEndSink :
	public CSink
{
public:
	/** Copy constructor disabled */
	CRodEndSink(const CRodEndSink &) = delete;
	/** Assignment operator disabled */
	void operator=(const CRodEndSink &) = delete;

	CRodEndSink();
	virtual ~CRodEndSink();

	void CRodEndSink::SetNegotiator(CNegotiate *negotiator);

	void AddRodEndSource(CRodEndSource* source);

	void MatchSourceLocation(Gdiplus::Point location);

private:
	///pointer to negotate for determining the position
	CNegotiate* mNegotiator = nullptr;

	CRodEndSource* mRodEndSource = nullptr;
};

