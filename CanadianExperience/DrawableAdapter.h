/**
* \file DrawableAdapter.h
*
* \author Ben Haase
*
* Implements the machine ,
* which has special functionality.
*/
#pragma once
#include "Drawable.h"

class CMachine;

/** Implements the top of a characters head,
* which has special functionality.
*/
class CDrawableAdapter :
	public CDrawable
{
public:
	CDrawableAdapter(const std::wstring &name);
	~CDrawableAdapter();

	/** Draw the drawable
	* \param graphics Graphics object to draw on */
	void Draw(Gdiplus::Graphics *graphics);

	/** Test to see if we have been clicked on by the mouse
	* \param pos Position to test
	* \returns true if clicked on */
	virtual bool HitTest(Gdiplus::Point pos);

	void SetMachine(int num);

private:
	///machine to be drawn
	CMachine* mMachine;
};

