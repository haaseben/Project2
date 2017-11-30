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

	/**
	* Returns the source that needs to be set for a sink to be set
	* \param component Component to set
	*/
	void CSink::SetComponent(CComponent* component);

	/**
	* Returns the component that needs to be set for a source
	* \return component to be set
	*/
	CComponent* GetComponent();

private:
	///component connected to a specific sink
	CComponent* mComponent=nullptr;
};

