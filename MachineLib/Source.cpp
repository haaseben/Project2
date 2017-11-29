/**
* \file Source.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Source.h"
#include "Component.h"

/**
* Constructor
*/
CSource::CSource()
{
}

/** Destructor */
CSource::~CSource()
{
}

void CSource::SetComponent(CComponent* component)
{
	mComponent = component;
}


CComponent* CSource::GetComponent()
{
	return mComponent;
}