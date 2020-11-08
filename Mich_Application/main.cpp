#include "calcul.h"

int main() {

  // step : parse the json file : if true --> findingShortestWay
  Calcul calc;
  std::list<unsigned int> chemin;

  if (calc.parseJsonFile("graph.json")) {
    chemin = calc.findingShortestWay();
  }

  std::cout << "\n-----> Start";
  for (std::list<unsigned int>::iterator it = chemin.begin();
       it != chemin.end(); ++it) {
    std::cout << "\n-----------> nextNode : " << *it;
  }
  std::cout << "\n-----> End ";

  getchar();
  return 0;
}
