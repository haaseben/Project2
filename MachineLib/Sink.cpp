/**
* \file Sink.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Sink.h"
#include "Component.h"

/**
* Constructor
*/
CSink::CSink()
{
}

/** Destructor */
CSink::~CSink()
{
}

void CSink::SetComponent(CComponent* component)
{
	mComponent = component;
}


CComponent* CSink::GetComponent()
{
	return mComponent;
}
