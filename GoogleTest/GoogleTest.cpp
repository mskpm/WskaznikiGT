
#include "gtest/gtest.h"
#include "Calculation.h"

// adding
TEST(Test_Calculation, Adding)
{
	EXPECT_EQ(5, add(2, 3));
	EXPECT_EQ(-5, add(-2, -3));
}

// substracting
TEST(Test_Calculation, Substracting)
{
	EXPECT_EQ(-1, substract(2, 3));
	EXPECT_EQ(1, substract(-2, -3));
}

// multiplying
TEST(Test_Calculation, Multiplying)
{
	EXPECT_EQ(6, multiply(2, 3));
	EXPECT_EQ(6, multiply(-2, -3));
}

// dividing
TEST(Test_Calculation, Dividing)
{
	EXPECT_EQ(2, divide(10, 5));
	EXPECT_EQ(-5, divide(15, -3));
}

// wypisz
TEST(Test_Calculation, wypisz)
{
	wypisz wynik;

	//wynik.set_func([&]() {wynik.frame(); });

	wynik.set_func(add);
	EXPECT_EQ(6, wynik.call_cb_func(2, 3));

	testing::internal::CaptureStdout();
	wynik.frame();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "|6|\n");

}