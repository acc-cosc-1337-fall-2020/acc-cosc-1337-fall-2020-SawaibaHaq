//Write the include statement for types.h here
#include "types.h"


//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>


int main() 
{
	int num;
	std::cout<<"enter the number : ";
	std::cin>>num;
	int result;
	result = multiply_num(num);
	std::cout<<" result is "<<result;
	int num1 = 4;
	result = multiply_num(num1);
	std::cout<<"result is "<<result;
	
	return 0;
}

