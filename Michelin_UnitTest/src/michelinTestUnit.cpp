
#include "calcul.h"
#include "michelinTestUnit_TestClass.h"

TEST_F(MichelinTestUnitClass, Test_ParseJsonFile) {

  Calcul calc;
  EXPECT_TRUE(calc.parseJsonFile("graphTest.json"));
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
