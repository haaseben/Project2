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
#include "PictureObserver.h"
#include "Timeline.h"
#include <memory>

class CViewTimeline;
class CMachine;
class CMainframe;

/** Implements the machine ,
* which has special functionality.
*/
class CDrawableAdapter :
	public CDrawable  , public CTimeline
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

	/** Sets the center of the machine 
	* \param x X value to set for Center
	* \param y Y value to set for center
	*/
	void SetCenter(int x, int y) {mCenter = Gdiplus::Point(x, y);}

	/** Sets the size of the machine
	* \param x X value to set for size
	* \param y Y value to set for size
	*/
	void SetSize(int x, int y) { mSize = Gdiplus::Point(x, y); }

	void CDrawableAdapter::Load(std::shared_ptr<xmlnode::CXmlNode> node)override;

	void CDrawableAdapter::Save(std::shared_ptr<xmlnode::CXmlNode> root)override;


private:
	///machine to be drawn
	std::shared_ptr<CMachine> mMachine;

	///center of each machine image
	Gdiplus::Point mCenter = Gdiplus::Point(0, 0);

	///size of the machine image
	Gdiplus::Point mSize = Gdiplus::Point(0, 0);

	///number of machine
	int mMachineNum;
};

