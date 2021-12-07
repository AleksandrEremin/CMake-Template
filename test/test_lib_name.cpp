#include <PointLib.h>
#include "../gtest/gtest.h"

TEST(Point, can_create_Point)
{
	ASSERT_NO_THROW(Point Point_one(5, 3, 0));
}

TEST(Point, default_constructor)
{
	ASSERT_NO_THROW(Point Point_one);
}

TEST(Point, start_end_error)
{
	ASSERT_ANY_THROW(Point Point_one(5, 3, 5));
}

TEST(Point, comparison_1_1)
{
	Point Point_one(1,5,1);
	Point Point_two(-5,4,0);
	EXPECT_EQ(true, Point_two< Point_one);
}
TEST(Point, comparison_1_2)
{
	Point Point_one(1, 5, 1);
	Point Point_two(-5, 4, 0);
	EXPECT_EQ(false, Point_two > Point_one);
}

TEST(Point, comparison_2_1)
{
	Point Point_one(8, 9, 0);
	Point Point_two(-5, 0, 1);
	EXPECT_EQ(true, Point_two > Point_one);
}

TEST(Point, comparison_2_2)
{
	Point Point_one(8, 9, 0);
	Point Point_two(-5, 0, 1);
	EXPECT_EQ(false, Point_two < Point_one);
}

TEST(Point, work_1)
{
	Point Point_one(8, 9, 0);
	Point Point_two(-5, 0, 1);
	EXPECT_EQ(16, round(Point::Length(Point_one, Point_two)));
}

TEST(Point, work_2)
{
	Point Point_one(8, 9, 1);
	Point Point_two(-5, 0, 0);
	EXPECT_EQ(16, round(Point::Length(Point_one, Point_two)));
}

TEST(Point, not_work)
{
	Point Point_one(8, 9, 1);
	Point Point_two(-5, 0, 1);
	ASSERT_ANY_THROW(Point::Length(Point_one, Point_two));
}