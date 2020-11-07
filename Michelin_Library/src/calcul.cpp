#include "calcul.h"

#include <fstream>
#include <json/json.h>
#include <json/value.h>

using namespace std;

bool Calcul::parseJsonFile(string filePath) {

  ifstream nodesFile(filePath);
  Json::Reader reader;
  Json::Value nodesBlocs;
  reader.parse(nodesFile, nodesBlocs);
  m_nodeBlocs.clear();

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
      const Json::Value &node = *itNodes;
      cout << " distance_km : " << node["distance_km"].asFloat();
      cout << " co2_g : " << node["co2_g"].asFloat();
      cout << " vertex_id : " << node["vertex_id"].asUInt();
      cout << endl;

      Node nodeObj;
      nodeObj.distance_km = node["distance_km"].asFloat();
      nodeObj.co2_g = node["co2_g"].asFloat();
      nodeObj.vertex_id = node["vertex_id"].asUInt();
      m_nodeList.push_back(nodeObj);
    }
    m_nodeBlocs.push_back(m_nodeList);
  }

  if (m_nodeBlocs.size())
    return true;

  return false;
}
