#include <iostream>
#include <string>
#include "Car.h"
#include "Motorcycle.h"
#include "Track.h"
int main() {
	Car car;
	Motorcycle moto;
	std::string Road1 = "=====++--+===+===+==";
	std::string Road2 = "=++=+=----+=======++=";
	Track track(Road1,"sun");
	std::cout << "\tRace 1 : Car vs Moto\n\tROAD 1\tWether = sun\n\tTilt angle = 0\n";
	track.Race(car, moto);
	std::cout << std::endl;
	track = { Road1,"rain",15 };
	std::cout << "\tRace 2 : Car vs Moto\n\tROAD 1\tWether = rain\n\tTilt angle = 15\n";
	track.Race(car, moto);
	std::cout << std::endl;
	track = { Road2,"snow" };
	std::cout << "\tRace 3 : Car vs Moto\n\tROAD 2\tWether = snow\n\tTilt angle = 0\n";
	track.Race(car, moto);
	std::cout << std::endl;
	track = { Road2,"snow",-10 };
	std::cout << "\tRace 4 : Car vs Moto\n\tROAD 2\tWether = snow\n\tTilt angle = -10\n";
	track.Race(car, moto);
	std::cout << std::endl;
	track = { Road1,"sun",15};
	std::cout << "\tRace 5 : Car vs Moto\n\tROAD 1\tWether = sun\n\tTilt angle = 15\n";
	track.Race(car, moto);
	std::cout << std::endl;
	track = { Road2,"sun",10 };
	std::cout << "\tRace 6 : Car vs Moto\n\tROAD 2\tWether = sun\n\tTilt angle = 10\n";
	track.Race(car, moto);
	return 0;
}