#include "Prog.h"
#include <gtest/gtest.h>


/*
// Test addition
TEST(CalculatorTest, Add)
{
  Calculator calc;
  EXPECT_DOUBLE_EQ(calc.add(10, 5), 15);
  EXPECT_DOUBLE_EQ(calc.add(-10, 5), -5);
}

// Test subtraction
TEST(CalculatorTest, Subtract)
{
  Calculator calc;
  EXPECT_DOUBLE_EQ(calc.subtract(10, 5), 5);
  EXPECT_DOUBLE_EQ(calc.subtract(5, 10), -5);
}

// Test multiplication
TEST(CalculatorTest, Multiply)
{
  Calculator calc;
  EXPECT_DOUBLE_EQ(calc.multiply(10, 5), 50);
  EXPECT_DOUBLE_EQ(calc.multiply(-10, 5), -50);
}

// Test division
TEST(CalculatorTest, Divide)
{
  Calculator calc;
  EXPECT_DOUBLE_EQ(calc.divide(10, 5), 2);
  EXPECT_THROW(calc.divide(10, 0), std::invalid_argument);
}

*/


// Test program using Google Test framework

TEST(ProgTest, WindowTest)
{
    WindowsWindow *win = new WindowsWindow(); 
    ScrollBar *sb = new WindowsScrollBar(); 


    
    EXPECT_NO_THROW(win->draw());
    EXPECT_NO_THROW(sb->draw());
}





