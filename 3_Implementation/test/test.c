/**
 * @file test.c
 * @author Sambit Nayak (Sambit.Nayak@ltts.com)
 * @For the testing of the every functon paramters taken into account.
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "DutyCycle.h"
#include "unity.h"
/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_Dutycycle(void);
void test_VoltageOutputofDutyCycle(void);





/* Write all the test functions */ 
/**
 * @brief Since the project uses concept of pointer and the functions doesn't take any input parameters and return 0 value, the teting is done to check 0 return value of all fuctions.
 * 
 */


void test_Dutycycle(void)
{
  TEST_ASSERT_EQUAL(0.400000,Dutycycle(2,3));
  //Value give as 1 and 0 Ton and Toff to get an Duty cycle value as 1

}
void test_VoltageOutputofDutyCycle(void)
{

  TEST_ASSERT_EQUAL(10.000000,VoltageOutputofDutyCycle(0.5,10));
  //To check the output voltage by putting Duty cycle as 5 and input voltage as 1
}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Dutycycle);
  RUN_TEST(test_VoltageOutputofDutyCycle);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}