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
/*
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

	virtual void Negotiate(CRod *rod) = 0;

};

