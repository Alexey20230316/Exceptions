#pragma once

#include<iostream>
#include<stdexcept>
#include<string.h>


class err :public std::domain_error
{
public:
	using std::domain_error::domain_error;
	const char* what() const override;
};