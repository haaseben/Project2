/**
* \file LeverEndSink.h
*
* \author Ben Haase
*
* Class that represents a lever end sink.
*
*/
#pragma once
#include "Sink.h"

class CLeverEndSource;
class CNegotiate;


/*
* Class that represents a lever end sink.
*/
class CLeverEndSink :
	public CSink
{
public:
	/** Copy constructor disabled */
	CLeverEndSink(const CLeverEndSink &) = delete;
	/** Assignment operator disabled */
	void operator=(const CLeverEndSink &) = delete;

	CLeverEndSink();
	virtual ~CLeverEndSink();

	void CLeverEndSink::SetNegotiator(CNegotiate *negotiator);

	void AddLeverEndSource(CLeverEndSource* source);

	void MatchSourceLocation(Gdiplus::Point location);

private:
	///pointer to negotate for determining the position
	CNegotiate* mNegotiator = nullptr;

	CLeverEndSource* mLeverEndSource = nullptr;
};

