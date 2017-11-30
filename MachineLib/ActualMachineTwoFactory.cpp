/**
* \file ActualMachineTwoFactory.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "ActualMachineTwoFactory.h"
#include "Shape.h"
#include "Rod.h"
#include "Arm.h"
#include "Motor.h"
#include "Piston.h"
#include "Lever.h"
#include "Gear.h"
#include "Rotor.h"

using namespace Gdiplus;
/**
* Constructor
*/
CActualMachineTwoFactory::CActualMachineTwoFactory()
{
}

/** Destructor */
CActualMachineTwoFactory::~CActualMachineTwoFactory()
{
}

/** This is a concrete factory method that creates our machine one.
* \returns Pointer to a machine object.
*/
std::shared_ptr<CActualMachine> CActualMachineTwoFactory::Create()
{
	auto machine = make_shared<CActualMachine>(2);

	// The base
	auto base = make_shared<CShape>();
	int wid = 550;
	base->Rectangle(-wid / 2, 0, wid, 40);
	base->SetImage(L"images/base.png");
	machine->AddComponent(base);

	// The motor
	auto motor = make_shared<CMotor>();
	motor->CenteredSquare(75);
	motor->SetLocation(150, -85);
	motor->MotorSpeed(1.0);
	motor->SetImage(L"images/shaft.png");

	auto rotor = make_shared<CRotor>();
	rotor->Rectangle(100, -38, 100, 100);
	rotor->SetLocation(100, -38);
	rotor->SetImage(L"images/motor2.png");

	machine->SetMotor(motor);
	machine->AddComponent(motor);
	machine->AddComponent(rotor);

	return machine;
}