#include <stdio.h>
#include "gtest/gtest.h"

// Unit under test
#include "squareRoot.h"

class HelloTest : public ::testing::Test 
{
 protected:
  void SetUp() override 
  {
  }
};

TEST_F(HelloTest, test_hello)
{
  float result = squareRoot(6.0f);
  printf("Result = %f",result);
  ASSERT_LT(result, 3.0f);
  ASSERT_GT(result, 2.0f);
  //FAIL() << "Test.";
}
