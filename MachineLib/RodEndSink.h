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
/**
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

	/**
	* Sets negotiater to sink relation
	* \param negotiator relation to perform negotiate
	*/
	void CRodEndSink::SetNegotiator(CNegotiate *negotiator);

	/**
	* Adds relation between sink and source
	* \param source Source to be added to sink
	*/
	void AddRodEndSource(CRodEndSource* source);

	/**
	* Matches source location
	* \param location New location of connection
	*/
	void MatchSourceLocation(Gdiplus::Point location);

	/**
	* returns sink location
	* \returns mLocation location of sink
	*/
	Gdiplus::Point GetLocation() { return mLocation; }

private:
	
	CNegotiate* mNegotiator = nullptr;  ///< The rotation sink for this component

	
	CRodEndSource* mRodEndSource = nullptr;///< The rotation sink for this component

	///current location of sink
	Gdiplus::Point mLocation;
};

