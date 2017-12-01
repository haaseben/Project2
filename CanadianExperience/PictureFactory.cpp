/**
 * \file PictureFactory.cpp
 *
 * \author Charles B. Owen
 */

#include "stdafx.h"
#include "PictureFactory.h"
#include "HaroldFactory.h"
#include "SpartyFactory.h"
#include "ImageDrawable.h"
#include "DrawableAdapter.h"

using namespace std;
using namespace Gdiplus;

CPictureFactory::CPictureFactory()
{
}


CPictureFactory::~CPictureFactory()
{
}


/*! Factory method to create a new picture.
* \returns The created picture
*/
std::shared_ptr<CPicture> CPictureFactory::Create()
{
    shared_ptr<CPicture> picture = make_shared<CPicture>();

    // Create the background and add it
    auto background = make_shared<CActor>(L"Background");
    background->SetClickable(false);
    background->SetPosition(Point(-100, 0));
    auto backgroundI = make_shared<CImageDrawable>(L"Background", L"images/Background.png");
    background->AddDrawable(backgroundI);
    background->SetRoot(backgroundI);
    picture->AddActor(background);

    // Create and add Harold
    CHaroldFactory factory;
    auto harold = factory.Create();

    // This is where Harold will start out.
    harold->SetPosition(Point(400, 500));

    picture->AddActor(harold);

    // Create and add Sparty
    CSpartyFactory sfactory;
    auto sparty = sfactory.Create();

    sparty->SetPosition(Point(200, 500));
    picture->AddActor(sparty);

	//Create Machine1
	auto machine1 = make_shared<CActor>(L"Machine");
	machine1->SetClickable(true);
	machine1->SetPosition(Point(450, 250));
	auto machineone = make_shared<CDrawableAdapter>(L"1");
	machineone->SetCenter(450, 250);
	machineone->SetSize(80, 230);
	machine1->AddDrawable(machineone);
	machine1->SetRoot(machineone);
	picture->AddActor(machine1);

	//Create Machine2
	auto machine2 = make_shared<CActor>(L"Machine");
	machine2->SetClickable(true);
	machine2->SetPosition(Point(500, 450));
	auto machinetwo = make_shared<CDrawableAdapter>(L"2");
	machinetwo->SetCenter(500, 450);
	machinetwo->SetSize(140, 160);
	machine2->AddDrawable(machinetwo);
	machine2->SetRoot(machinetwo);
	picture->AddActor(machine2);

    return picture;
}
