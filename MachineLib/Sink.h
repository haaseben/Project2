/**
* \file Sink.h
*
* \author Ben Haase
*
* Class that represents a sink for a machine.
*
*/
#pragma once
class CComponent;

/*
* Class that represents a sink for a machine.
*/
class CSink
{
public:
	/** Copy constructor disabled */
	CSink(const CSink &) = delete;
	/** Assignment operator disabled */
	void operator=(const CSink &) = delete;
	CSink();
	virtual ~CSink();

	void CSink::SetComponent(CComponent* component);

	CComponent* GetComponent();

private:
	///component connected to a specific sink
	CComponent* mComponent=nullptr;
};

