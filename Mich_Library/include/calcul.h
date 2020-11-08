#pragma once

#include <iostream>
#include <list>
#include <string>
#include <vector>

struct Node {
  float distance_km;
  float co2_g;
  unsigned int vertex_id;
};

class Calcul {
public:
  int add(int a, int b);
  bool parseJsonFile(std::string filePath);

protected:
  std::list<Node> m_nodeList;
  std::vector<std::list<Node>> m_nodeBlocs;
};
