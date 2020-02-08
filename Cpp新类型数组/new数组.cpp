#include <iostream>
#include <array>
#include <string>
#include <stdlib.h>
void main1()
{
	double db[4] = { 1.1,2.2,3.3,4.4 };
	//std::array数据类型，double元素类型，4为个数
	std::array<double, 4> dbnew = { 10.1,10.2,10.3,10.4 };
	for (int i = 0; i < 4; i++)
	{
		std::cout << db[i] << "  " << dbnew[i] << std::endl;

	}
	std::cin.get();
}

void main2()
{
	std::array<std::string, 5> string1 = {"yao","yang","yaoyang","ya"};
	for (int i = 0; i < 5; i++)
	{
		std::cout << string1[i] << std::endl;
		system(string1[i].c_str());
	}
	std::cin.get();
}
void main()
{
	std::string str1 = "task";
	std::string str2 = "list";
	std::string str3 = str1 + str2;
	system(str3.c_str());
std::cin.get();
}