#pragma once


/**
* Adding the first parameter with the second.
*/
int add(const int first, const int second) {
	return (first + second);
}

/**
* Substracting the first parameter with the second.
*/
int substract(const int first, const int second) {
	return (first - second);
}

/**
* Multiplying the first parameter by the second.
*/
int multiply(const int first, const int second) {
	return (first * second);
}

/**
* Dividing the first parameter by the second.
*/
int divide(const int first, const int second) {
	return (first / second);
}

class wypisz
{

	std::string wynik;
	std::function <int(int, int)> fptr;
public:

	void frame()
	{
		std::cout << wynik << "|" << call_cb_func(2,3) << "|" << std::endl;
	}

	int call_cb_func(int a, int b)
	{
		return fptr(a, b);
	}

	void set_func(std::function<int(int,int)> func)
	{
		fptr = func;
	}
};