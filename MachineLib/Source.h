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

	/**
	* Returns the component that needs to be set for a sink to be set
	* \param component to set
	*/
	void CSource::SetComponent(CComponent* component);

	/**
	* Returns the component that needs to be set for a source
	* \return component to be set
	*/
	CComponent* GetComponent();

private:
	///component connected to a specific sink
	CComponent* mComponent=nullptr;
};

