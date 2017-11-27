/**
* \file DrawableAdapter.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "DrawableAdapter.h"
#include "RealMachine.h"
/**
* Constructor
*/
CDrawableAdapter::CDrawableAdapter(const std::wstring &name) : CDrawable(name)
{
}

/**
* Destructor
*/
CDrawableAdapter::~CDrawableAdapter()
{
}


void CDrawableAdapter::SetMachine(int num)
{
	mMachine->SetMachineNumber(num);
}

/**
* Draw the image drawable
* \param graphics Graphics context to draw on
*/
void CDrawableAdapter::Draw(Gdiplus::Graphics *graphics)
{
	mMachine->DrawMachine(graphics);
}

/**
* Test to see if we clicked on the image.
* \param pos Position to test
* \returns True if clicked on
*/
bool CDrawableAdapter::HitTest(Gdiplus::Point pos)
{
	return false;
	//Matrix mat;
	//mat.Translate((float)mCenter.X, (float)mCenter.Y);
	//mat.Rotate((float)(mPlacedR * RtoD));
	//mat.Translate((float)-mPlacedPosition.X, (float)-mPlacedPosition.Y);

	//Point points[] = { pos };
	//mat.TransformPoints(points, 1);

	//double wid = mImage->GetWidth();
	//double hit = mImage->GetHeight();

	//double testX = points[0].X;
	//double testY = points[0].Y;

	//// Test to see if x, y are in the image
	//if (testX < 0 || testY < 0 || testX >= wid || testY >= hit)
	//{
	//	// We are outside the image
	//	return false;
	//}

	//// Test to see if x, y are in the drawn part of the image
	//auto format = mImage->GetPixelFormat();
	//if (format == PixelFormat32bppARGB || format == PixelFormat32bppPARGB)
	//{
	//	// This image has an alpha map, which implements the 
	//	// transparency. If so, we should check to see if we
	//	// clicked on a pixel where alpha is not zero, meaning
	//	// the pixel shows on the screen.
	//	Color color;
	//	mImage->GetPixel((int)testX, (int)testY, &color);
	//	return color.GetAlpha() != 0;
	//}
	//else {
	//	return true;
	//}
}