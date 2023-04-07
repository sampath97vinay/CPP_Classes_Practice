#pragma once
#include<string>
class Complex
{
private:
	float real1, img1, real2, img2;
public:
	Complex();
	Complex(float r1, float i1, float r2, float i2);
	std::string calc_sum();
	std::string calc_diff();
	float calc_prod();

};

