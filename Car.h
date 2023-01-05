#pragma once
#include <iostream>
#include <string>
class Car
{
public:
	Car();
	int Get_Speed()const;
	void Acceleration_speed(const char road_section);
	double Get_odometr()const;
	void Set_Acceliration(int angle);
	void Set_cornering_speed(std::string& weather);
	double Get_timeSection()const;
	void ResetParam();
private:
	void TimeSection();
	void Distance_traveled();
	int _speed;
	double _acceliration;
	int _cornering_speed;
	double _odometr;
	double _time_section;
};
