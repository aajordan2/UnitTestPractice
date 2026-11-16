/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, leadingUpper)
{
	Password my_password;
	int actual = my_password.has_mixed_case("mmmA");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, trailingUpper)
{
        Password my_password;
        int actual = my_password.has_mixed_case("aaaM");
        ASSERT_EQ(true, actual);
}

TEST(PasswordTest, allUpper)
{
        Password my_password;
        int actual = my_password.has_mixed_case("AAAAAA");
        ASSERT_EQ(true, actual);
}


TEST(PasswordTest, allLower)
{
        Password my_password;
        int actual = my_password.has_mixed_case("aaaaaa");
        ASSERT_EQ(true, actual);
}
