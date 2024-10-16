#pragma once
#include <string>

class Dog
{
private:
	std::string breed;
	std::string color;
	int height;
	int weight;

public:
	Dog(std::string breed, std::string color, std::string height, std::string weight);
	void Shake();
	void Sit();
	void LayDown();
};

