/**
* \file Negotiate.h
*
* \author Ben Haase
*
* Class that negotiates for rods and its sinks.
*
*/
#pragma once
#include "Component.h"

class CRod;
/**
* Class that negotiates for rods and its sinks.
*
*/
class CNegotiate :
	public CComponent
{
public:
	/** Copy constructor disabled */
	CNegotiate(const CNegotiate &) = delete;
	/** Assignment operator disabled */
	void operator=(const CNegotiate &) = delete;

	CNegotiate();
	virtual ~CNegotiate();


	/**
	* Negotiates between a rod and lever
	* \param rod Rod that will be used
	*/
	virtual void Negotiate(CRod *rod) = 0;

};

