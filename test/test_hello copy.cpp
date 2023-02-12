#include <stdio.h>
#include "gtest/gtest.h"

extern "C"
{
  // Unit under test
#include "hello.h"
}

class HelloTest : public ::testing::Test 
{
 protected:
  void SetUp() override 
  {
  }
};

TEST_F(HelloTest, test_hello)
{
  float result = hello();
  printf("Result = %f",result);
  //FAIL() << "Test.";
}
