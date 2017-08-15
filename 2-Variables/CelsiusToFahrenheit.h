#pragma once
#include <iostream>

inline int CToF()
{


	float degCelsius = 78.0f;

	std::cout << "enter a number" << std::endl;
	std::cin >> degCelsius;

	float degFahrenheit = 0.0f; // Modify this variable below.

	degFahrenheit = degCelsius;
	degFahrenheit = degFahrenheit * 1.8f;
	degFahrenheit = degFahrenheit + 32;


	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	return 0;
}