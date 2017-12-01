/**
* \file ActualMachine.h
*
* \author Ben Haase
*
* Class that represents an actual machine.
*
*/
#pragma once
#include <memory>
#include<vector>

class CActualMachineOneFactory;
class CActualMachineTwoFactory;
class CRealMachine;
class CComponent;
class CMotor;
using namespace std;
/**
* Class that represents an actual machine.
*/
class CActualMachine
{
public:
	/** Assignment operator disabled */
	void operator=(const CActualMachine &) = delete;
	/** Copy constructor disabled */
	CActualMachine(const CActualMachine &) = delete;
	CActualMachine(int machinenum);
	virtual ~CActualMachine();


	/**
	* Draw the component at the currently specified location
	* \param graphics GDI+ Graphics object
	* \param x X location of part
	* \param y Y location of part
	*/
	virtual void DrawActualMachine(Gdiplus::Graphics *graphics,int x, int y);

	/**
	* Add Component to list of components
	* \param comp Component to be added to list
	*/
	void AddComponent(std::shared_ptr<CComponent> comp);

	/**
	* Setter for time member variable
	* \param time Time to set the variable to 
	*/
	void SetTime(double time);

	/**
	* Sets the motor and gives it a speed
	* \param motor Motor to be set
	*/
	void SetMotor(std::shared_ptr<CMotor> motor) { mMotor = motor; }

	/**
	* Gets the specific motor
	* \return the motor 
	*/
	std::shared_ptr<CMotor> GetMotor() { return mMotor; }

	/**
	* Sets the speed of the machine
	* \param speed Speed to set 
	*/
	void CActualMachine::SetSpeed(double speed);

private:
	///pointer to real machine construct
	CRealMachine* mRealMachine;

	///list of components in machine
	std::vector<std::shared_ptr<CComponent>> mComponents;

	///machine to draw
	int mMachineNum;

	///pointer to motor for time and speed
	std::shared_ptr<CMotor> mMotor;
};