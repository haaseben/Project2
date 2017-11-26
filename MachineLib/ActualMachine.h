/**
* \file RealMachine.h
*
* \author Ben Haase
*
* Class that represents an actual machine.
*
*/
#pragma once
#include <memory>
#include<vector>
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
	CActualMachine(int machinenum);
	virtual ~CActualMachine();

	/**
	* Draw the machine at the currently specified location
	* \param graphics GDI+ Graphics object
	*/
	virtual void DrawActualMachine(Gdiplus::Graphics *graphics,int x, int y);

	void AddComponent(std::shared_ptr<CComponent> comp);

	void SetTime(double time);

private:
	///pointer to real machine 
	CRealMachine* mRealMachine;

	///list of components in machine
	std::vector<std::shared_ptr<CComponent>> mComponents;

	///machine to draw
	int mMachineNum;

	std::shared_ptr<CMotor> mMotor;
};

