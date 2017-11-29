/**
* \file Source.h
*
* \author Ben Haase
*
* Class that represents a source for a machine.
*
*/
#pragma once
class CComponent;
/*
* Class that represents a source for a machine.
*
*/
class CSource
{
public:
	/** Copy constructor disabled */
	CSource(const CSource &) = delete;
	/** Assignment operator disabled */
	void operator=(const CSource &) = delete;
	CSource();
	virtual ~CSource();

	void CSource::SetComponent(CComponent* component);

	CComponent* GetComponent();

private:
	///component connected to a specific sink
	CComponent* mComponent=nullptr;
};

