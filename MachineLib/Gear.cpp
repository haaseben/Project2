#include "stdafx.h"
#include "Gear.h"

const double ToothDepth = 5;     ///< Depth of a tooth in pixels
const double ToothWidth = 0.33;  ///< Width of a tooth at the top as fraction of tooth pitch
const double ToothSlope = 0.1;   ///< Fraction of pitch where the tooth slopes up or down


CGear::CGear(int radius,int teeth)
{
	mRadius = radius;
	mNumTeeth = teeth;

	// Where the tooth starts in the arc
	double toothStart = 1.0 - ToothWidth - ToothSlope * 2;
	double innerRadius = radius - ToothDepth;

	for (int t = 0; t < mNumTeeth; t++)
	{
		double angle1 = double(t) / double(mNumTeeth) * PI2;
		double angle2 = double(t + toothStart) / double(mNumTeeth) * PI2;
		double angle3 = double(t + toothStart + ToothSlope) / double(mNumTeeth) * PI2;
		double angle4 = double(t + toothStart + ToothSlope + ToothWidth) / double(mNumTeeth) * PI2;
		double angle5 = double(t + toothStart + ToothSlope * 2 + ToothWidth) / double(mNumTeeth) * PI2;

		AddPoint(innerRadius * cos(angle1), innerRadius * sin(angle1));
		AddPoint(innerRadius * cos(angle2), innerRadius * sin(angle2));
		AddPoint(radius * cos(angle3), radius * sin(angle3));
		AddPoint(radius * cos(angle4), radius * sin(angle4));
		AddPoint(innerRadius * cos(angle5), innerRadius * sin(angle5));
	}
}


CGear::~CGear()
{
}
