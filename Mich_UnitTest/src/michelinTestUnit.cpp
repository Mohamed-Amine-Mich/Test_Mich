
#include "calcul.h"
#include "michelinTestUnit_TestClass.h"

Calcul calc;

TEST_F(MichelinTestUnitClass, Test_ParseJsonFile) {

  EXPECT_TRUE(calc.parseJsonFile("graphTest.json"));
}

TEST_F(MichelinTestUnitClass, Test_FindingShortesWay) {

  EXPECT_TRUE(calc.findingShortestWay().size());
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  RUN_ALL_TESTS();

  getchar();
}
