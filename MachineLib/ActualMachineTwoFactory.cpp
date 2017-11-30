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

	// A post that holds the larger gear
	auto gear6post = make_shared<CShape>();
	gear6post->Rectangle(-10, 0, 5, 140);
	gear6post->SetLocation(80, -38);
	gear6post->SetColor(Color::LightSlateGray);
	machine->AddComponent(gear6post);

	// A post that holds the larger gear
	auto gear7post = make_shared<CShape>();
	gear7post->Rectangle(-10, 0, 5, 150);
	gear7post->SetLocation(55, -38);
	gear7post->SetColor(Color::DarkSeaGreen);
	machine->AddComponent(gear7post);

	// A post that holds the larger gear
	auto gear8post = make_shared<CShape>();
	gear8post->Rectangle(-10, 0, 20, 150);
	gear8post->SetLocation(-5, -38);
	gear8post->SetColor(Color::LightSlateGray);
	machine->AddComponent(gear8post);

	// A post that holds the larger gear
	auto gear9post = make_shared<CShape>();
	gear9post->Rectangle(-10, 0, 20, 280);
	gear9post->SetLocation(-85, -38);
	gear9post->SetColor(Color::DarkSeaGreen);
	machine->AddComponent(gear9post);

	// A post that holds the larger gear
	auto gear10post = make_shared<CShape>();
	gear10post->Rectangle(-10, 0, 20, 350);
	gear10post->SetLocation(-10, -38);
	gear10post->SetColor(Color::LightSlateGray);
	machine->AddComponent(gear10post);

	// A post that holds the larger gear
	auto gear11post = make_shared<CShape>();
	gear11post->Rectangle(-10, 0, 20, 380);
	gear11post->SetLocation(100, -38);
	gear11post->SetColor(Color::DarkSeaGreen);
	machine->AddComponent(gear11post);


	// The base
	auto base = make_shared<CShape>();
	int wid = 550;
	base->Rectangle(-wid / 2, 0, wid, 40);
	base->SetImage(L"images/base.png");
	machine->AddComponent(base);

	// The motor
	auto motor = make_shared<CMotor>();
	motor->CenteredSquare(40);
	motor->SetLocation(-110, -85);
	motor->MotorSpeed(1.0);
	motor->SetImage(L"images/shaft.png");

	auto rotor = make_shared<CRotor>();
	rotor->Rectangle(-160, -38, 100, 100);
	rotor->SetLocation(100, -38);
	rotor->SetImage(L"images/motor2.png");

	machine->SetMotor(motor);
	machine->AddComponent(rotor);
	machine->AddComponent(motor);

	// The gear driven by the motor
	// Radius=20pixels, 10 teeth
	auto gear1 = make_shared<CGear>(20, 10);
	//gear1->SetSpeed(1.0);
	gear1->SetImage(L"images/iron.png");
	gear1->SetLocation(-110, -70 - 20 / 2);
	machine->AddComponent(gear1);

	motor->GetSource()->AddRotatingSink(gear1->GetSink());

	// A post that holds the larger gear
	auto gear2post = make_shared<CShape>();
	gear2post->Rectangle(-10, 0, 20, 30);
	gear2post->SetLocation(gear1->GetX() + 50, -38);
	gear2post->SetColor(Color::LightSlateGray);
	machine->AddComponent(gear2post);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear2 = make_shared<CGear>(40, 20);
	//gear2->SetSpeed(-1.0);
	gear2->SetImage(L"images/hammered-copper.png");
	gear2->SetLocation(gear1->GetX() + 55, gear1->GetY());
	machine->AddComponent(gear2);

	gear1->GetSource()->AddRotatingSink(gear2->GetSink());
	gear1->MeshGear(-.5, 0.1);

	// A post that holds the larger gear
	auto gear3post = make_shared<CShape>();
	gear3post->Rectangle(-10, 0, 10, 30);
	gear3post->SetLocation(gear2->GetX() + 60, -38);
	gear3post->SetColor(Color::DarkSeaGreen);
	machine->AddComponent(gear3post);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear3 = make_shared<CGear>(20, 40);
	//gear2->SetSpeed(-1.0);
	gear3->SetImage(L"images/iron.png");
	gear3->SetLocation(gear2->GetX() + 55, gear2->GetY()+15);
	machine->AddComponent(gear3);

	gear2->GetSource()->AddRotatingSink(gear3->GetSink());
	gear2->MeshGear(-.5, 0.1);

	// A post that holds the larger gear
	auto gear4post = make_shared<CShape>();
	gear4post->Rectangle(-10, 0, 10, 30);
	gear4post->SetLocation(gear3->GetX() + 45, -38);
	gear4post->SetColor(Color::LightSlateGray);
	machine->AddComponent(gear4post);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear4 = make_shared<CGear>(40, 40);
	//gear2->SetSpeed(-1.0);
	gear4->SetImage(L"images/hammered-copper.png");
	gear4->SetLocation(gear3->GetX() + 40, gear3->GetY()-32);
	machine->AddComponent(gear4);

	gear3->GetSource()->AddRotatingSink(gear4->GetSink());
	gear3->MeshGear(-1, 0.3);


	// A post that holds the larger gear
	auto gear5post = make_shared<CShape>();
	gear5post->Rectangle(-10, 0, 10, 120);
	gear5post->SetLocation(gear4->GetX() + 55, -38);
	gear5post->SetColor(Color::DarkSeaGreen);
	machine->AddComponent(gear5post);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear5 = make_shared<CGear>(30, 10);
	//gear2->SetSpeed(-1.0);
	gear5->SetImage(L"images/iron.png");
	gear5->SetLocation(gear4->GetX() + 50, gear4->GetY() - 40);
	machine->AddComponent(gear5);

	gear4->GetSource()->AddRotatingSink(gear5->GetSink());
	gear4->MeshGear(-4, 0.3);


	

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear6 = make_shared<CGear>(15, 5);
	//gear2->SetSpeed(-1.0);
	gear6->SetImage(L"images/hammered-copper.png");
	gear6->SetLocation(gear5->GetX()  -20, gear5->GetY() - 35);
	machine->AddComponent(gear6);

	gear5->GetSource()->AddRotatingSink(gear6->GetSink());
	gear5->MeshGear(-4, 0.3);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear7 = make_shared<CGear>(20, 10);
	//gear2->SetSpeed(-1.0);
	gear7->SetImage(L"images/iron.png");
	gear7->SetLocation(gear6->GetX() - 22, gear6->GetY() -20);
	machine->AddComponent(gear7);

	gear6->GetSource()->AddRotatingSink(gear7->GetSink());
	gear6->MeshGear(-.5, 0.3);


	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear8 = make_shared<CGear>(50, 10);
	//gear2->SetSpeed(-1.0);
	gear8->SetImage(L"images/hammered-copper.png");
	gear8->SetLocation(-5, -230);
	machine->AddComponent(gear8);

	gear7->GetSource()->AddRotatingSink(gear8->GetSink());
	gear7->MeshGear(-1, 0.3);


	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear9 = make_shared<CGear>(50, 50);
	//gear2->SetSpeed(-1.0);
	gear9->SetImage(L"images/iron.png");
	gear9->SetLocation(-85, -280);
	machine->AddComponent(gear9);

	gear8->GetSource()->AddRotatingSink(gear9->GetSink());
	gear8->MeshGear(-.2, 0.3);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear10 = make_shared<CGear>(20, 50);
	//gear2->SetSpeed(-1.0);
	gear10->SetImage(L"images/hammered-copper.png");
	gear10->SetLocation(-50, -330);
	machine->AddComponent(gear10);

	gear9->GetSource()->AddRotatingSink(gear10->GetSink());
	gear9->MeshGear(-1, 0.3);

	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear11 = make_shared<CGear>(80, 30);
	//gear2->SetSpeed(-1.0);
	gear11->SetImage(L"images/hammered-copper.png");
	gear11->SetLocation(0, -370);
	machine->AddComponent(gear11);

	gear10->GetSource()->AddRotatingSink(gear11->GetSink());
	gear10->MeshGear(-1, 0.3);


	// The second gear
	// Radius=40pixels, 20 teeth
	auto gear12 = make_shared<CGear>(40, 20);
	//gear2->SetSpeed(-1.0);
	gear12->SetImage(L"images/iron.png");
	gear12->SetLocation(100, -420);
	machine->AddComponent(gear12);

	gear11->GetSource()->AddRotatingSink(gear12->GetSink());
	gear11->MeshGear(-1.5, 0.3);

	return machine;
}