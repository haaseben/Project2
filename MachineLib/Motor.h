/**
* \file Motor.h
*
* \author Ben Haase
*
* Class that represents a motor for a machine.
*
*/
#pragma once
#include "Component.h"


class CActualMachine;
/**
* Class that represents a motor for a machine.
*
*/
class CMotor :
	public CComponent
{
public:
	/** Copy constructor disabled */
	CMotor(const CMotor &) = delete;
	/** Assignment operator disabled */
	void operator=(const CMotor &) = delete;
	CMotor();
	virtual ~CMotor();

	/**
	* Computers the revolution 
	* \param framerate FrameRate
	* \ param framenum Number of frames
	*/
	void ComputeRevs(int framerate, int framenum);

	/**
	* Returns rotation of the motor
	* \returns rotation
	*/
	double GetRotation();

	/**
	* Sets time of motor
	* \param time Time to set
	*/
	void SetTime(double time);

	/**
	* Sets speed of motor
	* \param speed Speed to set
	*/
	void MotorSpeed(double speed);

	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \ param x X location of part
	* \param y Y location of part
	*/
	void CMotor::DrawPart(Gdiplus::Graphics *graphics, int x, int y) ;

	/**
	* Returns the source that needs to be set for a sink to be set
	* \return source to set
	*/
	CRotatingSource* GetSource() { return &mSource; }

private:
	///current time
	double mTime;

	///current revolutions
	double mRevs;

	///current speed
	double mSpeed;

	///pointer to actual machine
	CActualMachine* mActualMachine;

	///source construct for this motor
	CRotatingSource mSource;
};

