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
#include <memory>

class CMachine;

/** Implements the top of a characters head,
* which has special functionality.
*/
class CDrawableAdapter :
	public CDrawable
{
public:
	/** Default constructor disabled */
	CDrawableAdapter() = delete;
	/** Copy constructor disabled */
	CDrawableAdapter(const CDrawableAdapter &) = delete;
	/** Assignment operator disabled */
	void operator=(const CDrawableAdapter &) = delete;

	CDrawableAdapter(const std::wstring &name);
	virtual ~CDrawableAdapter();

	/** Draw the drawable
	* \param graphics Graphics object to draw on */
	void Draw(Gdiplus::Graphics *graphics);

	/** Test to see if we have been clicked on by the mouse
	* \param pos Position to test
	* \returns true if clicked on */
	virtual bool HitTest(Gdiplus::Point pos);

	/** Sets which machine will draw
	* \param num Number to set machine to */
	void SetMachine(int num);



private:
	///machine to be drawn
	std::shared_ptr<CMachine> mMachine;
};

