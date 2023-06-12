#pragma once

#include<stdexcept>


class Build_Error :public std::domain_error
{
public:
public:
	const char* what() const override;
	
private:

};