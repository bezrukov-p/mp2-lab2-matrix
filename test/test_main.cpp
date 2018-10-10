#include <gtest.h>
#include "utmatrix.h"

int main(int argc, char **argv)
{
	//TMatrix<int> tmp(10);
	//TMatrix<int> tmp1(tmp);
	//cout << tmp.GetSize();
	//cout << tmp1;
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
