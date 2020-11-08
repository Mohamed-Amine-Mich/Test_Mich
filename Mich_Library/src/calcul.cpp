#include "calcul.h"

#include <algorithm>
#include <fstream>
#include <iterator>
#include <json/json.h>
#include <json/value.h>

using namespace std;

/**
 * @brief parse the json.
 * @param[in] filePath : json file path.
 * @return bool : true is ok.
 */
bool Calcul::parseJsonFile(string filePath) {

  ifstream nodesFile(filePath);
  Json::Reader reader;
  Json::Value nodesBlocs;
  reader.parse(nodesFile, nodesBlocs);
  m_nodeBlocs.clear();
  m_totalArcs = 0;
  m_totalNode = 0;

  // -- Parse all blocs
  for (Json::Value::iterator itBlocs = nodesBlocs.begin();
       itBlocs != nodesBlocs.end(); ++itBlocs) {
    // -- Parse each bloc of blocs
    Json::Value &nodesBloc = *itBlocs;
    m_nodeList.clear();
    // --- Take all nodes of each bloc
    for (Json::Value::iterator itNodes = nodesBloc.begin();
         itNodes != nodesBloc.end(); ++itNodes) {
      // ---
      m_totalArcs++;
      const Json::Value &node = *itNodes;
      Node nodeObj;
      nodeObj.distance_km = node["distance_km"].asFloat();
      nodeObj.co2_g = node["co2_g"].asFloat();
      nodeObj.vertex_id = node["vertex_id"].asUInt();
      m_nodeList.push_back(nodeObj);
    }
    m_totalNode++;
    m_nodeBlocs.push_back(m_nodeList);
  }

  if (m_nodeBlocs.size()) {
    return true;
  }

  return false;
}

/**
 * @brief search the next node (how has the best distanse).
 * @param[in] list of arc possible (or destinations possible).
 * @return uint : next vertex.
 */
unsigned int Calcul::searchBestDistance(list<Node> nodeList) {
  // ---
  list<Node>::iterator it = nodeList.begin();
  float bestDistance = it->distance_km;
  unsigned int nextNode = it->vertex_id;

  while (it != nodeList.end()) {
    // ---
    it = find_if(nodeList.begin(), nodeList.end(),
                 [bestDistance](Node const &n) {
                   return (n.distance_km < bestDistance);
                 });
    // ---
    if (it != nodeList.end()) {
      bestDistance = it->distance_km;
      nextNode = it->vertex_id;
    }
  }

  return nextNode;
}

/**
 * @brief search the shortest way (hwo have the best distanse each time).
 */
list<unsigned int> Calcul::findingShortestWay() {
  // ---
  list<unsigned int> result;
  unsigned int cpt = 0, nextNode = 0;
  vector<list<Node>>::iterator itNodeVector = m_nodeBlocs.begin();
  result.push_back(0);

  while (nextNode != (m_totalNode - 1)) {

    // --- On choisi le meilleur next vertex
    if ((*itNodeVector).size()) {
      nextNode = searchBestDistance(*itNodeVector);
      result.push_back(nextNode);
    }

    // --- On bouge l'iterator vers next vertex
    itNodeVector = m_nodeBlocs.begin() + nextNode;

    // ---
    if (cpt > m_totalArcs) {
      break;
      cout << "\n-----> soft Problem !";
    }
    cpt++;
  }

  return result;
}
