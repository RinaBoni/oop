#include "pch.h"
#include "../energy.h"
#include <iostream>

using namespace std;


TEST(TestCaseName1, TestName1) {
	EnergyDrink gorilla;
	gorilla.SetPrice()
	EXPECT_EQ(gorilla.GetBrand(), "Gorilla");
	//EXPECT_TRUE(true);
}