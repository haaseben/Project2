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
class CRod;

/**
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

	/**
	* Sets negotiater to sink relation
	* \param negotiator relation to perform negotiate
	*/
	void CLeverEndSink::SetNegotiator(CNegotiate *negotiator);

	/**
	* Adds relation between sink and source
	* \param source Source to be added to sink
	*/
	void AddLeverEndSource(CLeverEndSource* source);

	/**
	* Matches source location
	* \param location New location of connection
	*/
	void MatchSourceLocation(Gdiplus::Point location);

	/**
	* Matches source location
	* \param rod 
	*/
	double CLeverEndSink::Negotiate(CRod* rod);

private:
	
	CNegotiate* mNegotiator = nullptr; ///< The rotation sink for this component

	CLeverEndSource* mLeverEndSource = nullptr; ///< The rotation sink for this component
};

