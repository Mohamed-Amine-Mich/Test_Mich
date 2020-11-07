#include "calcul.h"

int main() {

  // step : parse the json file
  Calcul calc;
  std::cout << "----------------> : \n"
            << calc.parseJsonFile("graph.json") << "\n";
}
