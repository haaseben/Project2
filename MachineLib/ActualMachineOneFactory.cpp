/**
* \file ActualMachineOneFactory.cpp
*
* \author Ben Haase
*/
#include "stdafx.h"
#include "ActualMachineOneFactory.h"
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
ActualMachineOneFactory::ActualMachineOneFactory()
{
}

/** Destructor */
ActualMachineOneFactory::~ActualMachineOneFactory()
{
}

/** This is a concrete factory method that creates our machine one.
* \returns Pointer to a machine object.
*/
std::shared_ptr<CActualMachine> ActualMachineOneFactory::Create()
{
	auto machine = make_shared<CActualMachine>(1);


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
	motor->SetImage(L"images/electric-wheel.png");

	auto rotor = make_shared<CRotor>();
	rotor->Rectangle(100,-38,100,100);
	rotor->SetLocation(100, -38);
	rotor->SetImage(L"images/motor-frame.png");

	machine->SetMotor(motor);
	machine->AddComponent(motor);
	machine->AddComponent(rotor);

	// The gear driven by the motor
	// Radius=20pixels, 10 teeth
	auto gear1 = make_shared<CGear>(20, 10);
	//gear1->SetSpeed(1.0);
	gear1->SetImage(L"images/iron.png");
	gear1->SetLocation(150, -70 - 20 / 2);
	machine->AddComponent(gear1);

	motor->GetSource()->AddRotatingSink(gear1->GetSink());

	// A post that holds the larger gear
	auto gear2post = make_shared<CShape>();
	gear2post->Rectangle(-10, 0, 20, 30);
	gear2post->SetLocation(gear1->GetX()+50 , -38);
	gear2post->SetColor(Color::DarkGreen);
	machine->AddComponent(gear2post);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear2 = make_shared<CGear>(40, 20);
	//gear2->SetSpeed(-1.0);
	gear2->SetImage(L"images/hammered-copper.png");
	gear2->SetLocation(gear1->GetX() + 55, gear1->GetY());
	machine->AddComponent(gear2);

	gear1->GetSource()->AddRotatingSink(gear2->GetSink());
	gear1->MeshGear(-.5,0.1);

	//// The arm attached to the second gear
	//// 50 pixels long
	auto arm = make_shared<CArm>(50);
	arm->Rectangle(-4, 3, 50, 7);
	arm->SetImage(L"images/arm1.png");
	arm->SetLocation(gear2->GetX(),gear2->GetY()+1);
	machine->AddComponent(arm);

	gear2->GetSource()->AddRotatingSink(arm->GetSink());
	gear2->MeshGear(1, .1);

	//// The column that holds the lever
	auto column = make_shared<CShape>();
	column->Rectangle(-20, -40, 40, 220);
	column->SetImage(L"images/column.png");

	//// The lever
	auto lever = make_shared<CLever>(400);
	lever->Rectangle(-256, 30, 512, 60);
	lever->SetLocation(0, -227);
	lever->SetImage(L"images/lever.png");
	//lever->SetDriveEnd(185);
	machine->AddComponent(lever);

	//// The flag attached to the lever
	//// Adding the points allows (0,0) be at the end
	//// of the flagpole, so it rotates around that point.
	//auto flag = make_shared<CShape>();
	//flag->AddPoint(-50, 0);
	//flag->AddPoint(-50, -100);
	//flag->AddPoint(5, -100);
	//flag->AddPoint(5, 0);
	//flag->SetImage(L"images/flag.png");
	//flag->SetPosition(lever->GetPosition());
	//machine->AddPart(flag);
	//lever->GetRotationSource()->AddSink(flag->GetSink());

	//// Column is added after the lever so it is in front
	machine->AddComponent(column);

	//// Rod from arm to lever
	//// 150 pixels long, 7 pixels wide
	auto rod1 = make_shared<CRod>(150);
	BYTE gray = 50;
	rod1->Rectangle(-10, 2, 7, 150);
	rod1->SetColor(Color(gray, gray, gray));
	machine->AddComponent(rod1);

	arm->GetRodEndSource()->AddRodEndSink(rod1->GetSink());
	rod1->GetLeverEndSource()->AddLeverEndSink(lever->GetSink());

	//// Rod from lever to Piston
	//// 50 pixels long, 5 pixels wide
	//auto rod2 = make_shared<CRod>(50, 5);
	//rod2->SetColor(Color(gray, gray, gray));

	//lever->GetPositionSource()->AddPart(rod2);

	//// Piston
	//// The points are added so that (0,0) is 
	//// the attachment point for the rod.
	//auto piston = make_shared<CShape>();
	//double pistonH = 90;
	//double pistonW = 0.386 * pistonH;
	//double pistonC = 13.0 / 215.0 * pistonH;
	//piston->AddPoint(-pistonW / 2, -pistonC);
	//piston->AddPoint(pistonW / 2, -pistonC);
	//piston->AddPoint(pistonW / 2, -pistonC + pistonH);
	//piston->AddPoint(-pistonW / 2, -pistonC + pistonH);
	//piston->SetImage(L"images/piston.png");
	//piston->SetPosition(-175, -150);
	//machine->AddPart(piston);
	//rod2->SetRodSink(piston->GetRodSink());

	//machine->AddPart(rod2);

	//// Cylinder
	//auto cylinder = make_shared<CShape>();
	//cylinder->Rectangle(-30, 0, 60, 120);
	//cylinder->SetPosition(-175, -38);
	//cylinder->SetImage(L"images/cylinder.png");
	//machine->AddPart(cylinder);

	return machine;
}