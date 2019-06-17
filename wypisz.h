#pragma once

#include <iostream>
#include <sstream>
#include <functional>
#include "..//WskaznikiGT/GoogleTest/Calculation.h"

class wypisz
{
		
		std::string wynik;
		std::function <int(int, int)> fptr;
	public:
		
		void frame()
		{
			std::cout << wynik << "|"<< &fptr << "|" << std::endl;
		}

		void call_cb_func(int a, int b)
		{
			fptr(a,b);
		}

		void set_func(std::function<void()> func)
		{
			fptr = add;
		}
};

