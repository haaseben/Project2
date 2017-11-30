/**
* \file PistonSink.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "PistonSink.h"
#include "PistonSource.h"

/**
* Constructor
*/
CPistonSink::CPistonSink()
{
}

/** Destructor */
CPistonSink::~CPistonSink()
{
}

void CPistonSink::AddPistonSource(CPistonSource* source)
{
	mPistonSource = source;
}

void CPistonSink::MatchSourceLocation(Gdiplus::Point location)
{
	GetComponent()->SetLocation(location.X, location.Y);
}