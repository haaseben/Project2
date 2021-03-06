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
#include "MainFrm.h"
#include "ViewEdit.h"
#include "ViewTimeline.h"


using namespace std;
using namespace Gdiplus;

/// Constant ratio to convert radians to degrees
const double RtoD = 57.295779513;

/**
* Constructor
* \param name The drawable name
*/
CDrawableAdapter::CDrawableAdapter(const std::wstring &name) : CDrawable(name)
{
	int mMachineNum = stoi(name);
	CMachineFactory factory;
	mMachine = factory.CreateMachine();
	mMachine->SetMachineNumber(mMachineNum);
	mMachine->SetFrameRate(30);
	mMachine->SetSpeed(1);
	//mMachine->SetMachineFrame(300);

	CMachineDlg dlg(mMachine);
	if (dlg.DoModal() == IDOK)
	{
		// A machine has been selected

	}

}
	

/**
* Destructor
*/
CDrawableAdapter::~CDrawableAdapter()
{
}


void CDrawableAdapter::SetMachine(int num)
{
	mMachine->SetMachineFrame(GetCurrentFrame());
}

/**
* Draw the image drawable
* \param graphics Graphics context to draw on
*/
void CDrawableAdapter::Draw(Gdiplus::Graphics *graphics)
{
	mMachine->SetMachineFrame(GetCurrentFrame());
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
	
	double wid = mSize.X;
	double hit = mSize.Y;


	double testX = pos.X - mCenter.X + wid / 2;
	double testY = pos.Y - mCenter.Y + hit / 2;

	// Test to see if x, y are in the image
	if (testX < 0 || testY < 0 || testX >= wid || testY >= hit)
	{
		// We are outside the image
		return false;
	}

	else {
		CMachineDlg dlg(mMachine);
		if (dlg.DoModal() == IDOK)
		{
			
		}
		return true;
	}

	
}


/**
* Load a timeline animation from a file
* \param root XML node to load from
*/
void CDrawableAdapter::Load(std::shared_ptr<xmlnode::CXmlNode> node)
{
	CTimeline::Load(node);

	mMachineNum = node->GetAttributeIntValue(L"machineNum", 1);
}

/**
* Save the timeline animation to a file
* \param root The XML node to save to
*/
void CDrawableAdapter::Save(std::shared_ptr<xmlnode::CXmlNode> root)
{
	CTimeline::Save(root);

	root->SetAttribute(L"machineNum",mMachineNum );
}