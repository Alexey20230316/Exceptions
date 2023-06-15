#pragma once

#include<iostream>
#include<stdexcept>
#include<string.h>


class err :public std::domain_error
{
public:
	
	err(std::string msg);
	
};