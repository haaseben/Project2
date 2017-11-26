/**
* \file RealMachine.h
*
* \author Ben Haase
*
* Class that represents a real machine.
*
*/
#pragma once
#include "Machine.h"


class CActualMachine;

/**
* Class that represents a real machine.
*/
class CRealMachine :
	public CMachine
{
public:
	CRealMachine();
	virtual ~CRealMachine();

	/// Copy constructor/disabled
	CRealMachine(const CRealMachine &) = delete;

	/// Assignment operator/disabled
	void operator=(const CRealMachine &) = delete;

	/**
	* Set the position for the root of the machine
	* \param x X location (pixels)
	* \param y Y location (pixels)
	*/
	virtual void SetLocation(int x, int y);

	/**
	* Draw the machine at the currently specified location
	* \param graphics GDI+ Graphics object
	*/
	virtual void DrawMachine(Gdiplus::Graphics *graphics);

	/**
	* Set the current machine animation frame
	* \param frame Frame number
	*/
	virtual void SetMachineFrame(int frame);

	/**
	* Set the expected frame rate in frames per second
	* \param rate Frame rate in frames per second
	*/
	virtual void SetFrameRate(double rate);

	/**
	* Set  the bend angle
	* \param speed Speed from 0 to 1, where 1 is full speed
	*/
	virtual void SetSpeed(double speed);

	/**
	* Set the machine number
	* \param machine An integer number. Each number makes a different machine
	*/
	virtual void SetMachineNumber(int machine);

	/**
	* Get the current machine number
	* \return Machine number integer
	*/
	virtual int GetMachineNumber();

	/**
	* Get the current time
	* \return time double
	*/
	double GetTime();

private:
	///current frame rate
	double mFrameRate;

	///current place in animation
	int mFrameNum;

	///time for starting the machine
	double mStartTime;

	///current machine we have drawn
	int mMachineNum;

	///location of the machine
	Gdiplus::Point mLocation;

	///speed of the machine
	double mSpeed;

	///pointer to Actual Machine class
	std::shared_ptr<CActualMachine> mActualMachine;
};

