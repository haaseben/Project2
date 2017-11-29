#include "stdafx.h"
#include "RotatingSource.h"
#include "RotatingSink.h"
#include "Component.h"

/**
* Constructor
*/
CRotatingSink::CRotatingSink()
{
}

/** Destructor */
CRotatingSink::~CRotatingSink()
{
}

void CRotatingSink::AddRotatingSource(CRotatingSource* rotate)
{
	mRotatingSource = rotate;
}

void CRotatingSink::MatchSourceRotation(double rotation)
{
	GetComponent()->SetRotation(rotation);
}

void CRotatingSink::MatchSourceSpeed(double speed)
{
	GetComponent()->SetRotation(speed);
}
