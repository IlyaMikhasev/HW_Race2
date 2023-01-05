#pragma once
#include <iostream>
#include <string>
#include "Car.h"
#include "Motorcycle.h"
class Track
{
public:
	Track(const std::string& track,const std::string& weather,int angle);
	Track(const std::string& track,const std::string& weather);
	Track() = delete;
	void Race(Car& car, Motorcycle& moto);
private:
	std::string _track;
	std::string _weather;
	int _tilt_angle;
};

