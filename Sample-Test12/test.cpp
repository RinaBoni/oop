#include "pch.h"
#include "energy.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Energy_drinks, GetBrand) {
    EnergyDrink dr;
    dr.SetBrand("gorilla");

    EXPECT_EQ(dr.GetBrand(), "gorilla");
    
}

TEST(Energy_drinks, GetName) {
    EnergyDrink dr;
    dr.SetName("mango");

    EXPECT_EQ(dr.GetName(), "mango");

}

TEST(Energy_drinks, GetTaste) {
    EnergyDrink dr;
    dr.SetTaste("mango&coconut");

    EXPECT_EQ(dr.GetTaste(), "mango&coconut");

}

TEST(Energy_drinks, GetEnergyValue) {
    EnergyDrink dr;
    dr.SetEnergyValue(115);

    EXPECT_EQ(dr.GetEnergyValue(), 115);

}

TEST(Energy_drinks, GetEnergyValue) {
    EnergyDrink dr;
    dr.SetEnergyValue(250);

    EXPECT_EQ(dr.GetEnergyValue(), 250);

}

TEST(Energy_drinks, Get—affeine) {
    EnergyDrink dr;
    dr.Set—affeine(30);

    EXPECT_EQ(dr.Get—affeine(), 30);

}

TEST(Energy_drinks, GetTaurine) {
    EnergyDrink dr;
    dr.SetTaurine(0);

    EXPECT_EQ(dr.GetTaurine(), 0);

}

TEST(Energy_drinks, GetPrice) {
    EnergyDrink dr;
    dr.SetPrice(59);

    EXPECT_EQ(dr.GetPrice(), 59);

}

TEST(Energy_drinks, GetVolume) {
    EnergyDrink dr;
    dr.SetVolume(0.49);

    EXPECT_EQ(dr.GetVolume(), 0.49);

}