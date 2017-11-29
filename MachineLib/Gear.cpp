/**
* \file Gear.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "Gear.h"

const double ToothDepth = 5;     ///< Depth of a tooth in pixels
const double ToothWidth = 0.33;  ///< Width of a tooth at the top as fraction of tooth pitch
const double ToothSlope = 0.1;   ///< Fraction of pitch where the tooth slopes up or down

/**
* Constructor
* \param radius Radius of gear
* \param teeth number of teeth on gear
*/
CGear::CGear(int radius,int teeth)
{
	mRadius = radius;
	mNumTeeth = teeth;
	mRotatingSink.SetComponent(this);
	mRotatingSource.SetComponent(this);

	int PI2 = 3.14 * 2;
	// Where the tooth starts in the arc
	double toothStart = 1.0 - ToothWidth - ToothSlope * 2;
	double innerRadius = mRadius - ToothDepth;

	for (int t = 0; t < mNumTeeth; t++)
	{
		double angle1 = double(t) / double(mNumTeeth) * PI2;
		double angle2 = double(t + toothStart) / double(mNumTeeth) * PI2;
		double angle3 = double(t + toothStart + ToothSlope) / double(mNumTeeth) * PI2;
		double angle4 = double(t + toothStart + ToothSlope + ToothWidth) / double(mNumTeeth) * PI2;
		double angle5 = double(t + toothStart + ToothSlope * 2 + ToothWidth) / double(mNumTeeth) * PI2;

		AddPoint(innerRadius * cos(angle1), innerRadius * sin(angle1));
		AddPoint(innerRadius * cos(angle2), innerRadius * sin(angle2));
		AddPoint(mRadius * cos(angle3), mRadius * sin(angle3));
		AddPoint(mRadius * cos(angle4), mRadius * sin(angle4));
		AddPoint(innerRadius * cos(angle5), innerRadius * sin(angle5));
	}
}

/** Destructor */
CGear::~CGear()
{
}


void CGear::DrawPart(Gdiplus::Graphics *graphics, int x, int y)
{
	DrawPolygon(graphics, x+GetX(), y+GetY());
}

void CGear::MeshGear(std::shared_ptr<CGear> gear, double offset)
{
	mPhase = offset;

	GetSource()->AddRotatingSink(gear->GetSink());

	mRotation = -gear->GetRotation() * GetNumTeeth() / gear->GetNumTeeth() + mPhase;

	mRotatingSource.UpdateRotation(mRotation);

	gear->SetRotation(mRotation);
}

void CGear::SetRotation(double rotation)
{
	CComponent::SetRotation(rotation);
	mRotatingSource.UpdateRotation(rotation);
}

void ExamineSink(CRotatingSink rotating)
{

}