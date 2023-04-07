#include "Complex.h"
#include<iostream>
#include<string>

using namespace std;

Complex::Complex() : real1{ 0.0 }, img1{ 0.0 }, real2{ 0.0}, img2{ 0.0 } {}

Complex::Complex(float r1,float img1,float r2, float img2): 
	real1{r1}, img1 {img1}, real2 {r2}, img2 {img2}{}

std::string Complex::calc_sum() {
	float real_sum = real1 + real2;
	float img_sum = img1 + img2;
	
	std::string r_sum, i_sum;
	r_sum = to_string(real_sum);
	i_sum = to_string(img_sum);

	//std::string x = " + i";
	
	std::string sum = r_sum + " i" + i_sum;
	return sum;
}

std::string Complex::calc_diff() {
	float real_diff = real1 - real2;
	float img_diff = img1 - img2;
	 
	std::string r_diff, i_diff;
	r_diff = to_string(real_diff);
	i_diff = to_string(img_diff);

	string diff = r_diff + " + i" + i_diff;
	return diff;
}

float Complex::calc_prod() {

	float real_prod = real1 * real2;
	float img_prod = img1 * img2;
	
	float prod = real_prod - img_prod;
	return prod;
}
