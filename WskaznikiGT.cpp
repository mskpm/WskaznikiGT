// WskaznikiGT.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <functional>
#include "..//WskaznikiGT/GoogleTest/Calculation.h"
#include "../WskaznikiGT/wypisz.h"

int main()
{
	wypisz wynik;
	
	wynik.set_func([&]() {wynik.frame(); });
	wynik.call_cb_func(2, 3);
}

