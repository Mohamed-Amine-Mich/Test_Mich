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
  std::list<unsigned int> findingShortestWay();
  bool parseJsonFile(std::string filePath);

private:
  unsigned int searchBestDistance(std::list<Node> nodeList);

protected:
  unsigned int m_totalArcs;
  unsigned int m_totalNode;
  std::list<Node> m_nodeList;
  std::vector<std::list<Node>> m_nodeBlocs;
};
