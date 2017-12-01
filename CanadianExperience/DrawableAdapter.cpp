/**
* \file DrawableAdapter.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "DrawableAdapter.h"
#include "Machine.h"
#include "MachineFactory.h"
#include "MachineDlg.h"

/**
* Constructor
* \param name The drawable name
*/
CDrawableAdapter::CDrawableAdapter(const std::wstring &name) : CDrawable(name)
{
	int nameInt = stoi(name);
	CMachineFactory factory;
	mMachine = factory.CreateMachine();
	mMachine->SetMachineNumber(nameInt);
	mMachine->SetFrameRate(30);
	mMachine->SetSpeed(1);
	mMachine->SetMachineFrame(300);


}
	

/**
* Destructor
*/
CDrawableAdapter::~CDrawableAdapter()
{
}


void CDrawableAdapter::SetMachine(int num)
{
	//mMachine->SetMachineNumber(num);
}

/**
* Draw the image drawable
* \param graphics Graphics context to draw on
*/
void CDrawableAdapter::Draw(Gdiplus::Graphics *graphics)
{
	float scale = 0.3f;

	auto save = graphics->Save();
	graphics->TranslateTransform((float)mPlacedPosition.X,
		(float)mPlacedPosition.Y);
	graphics->ScaleTransform(scale, scale);
	mMachine->DrawMachine(graphics);
	graphics->Restore(save);
}

/**
* Test to see if we clicked on the image.
* \param pos Position to test
* \returns True if clicked on
*/
bool CDrawableAdapter::HitTest(Gdiplus::Point pos)
{
	return false;
}