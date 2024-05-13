//Barak Zalman
// Id: 325706661
//email: barak12395@gmail.com

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>
#include <string>

namespace ariel {

class Graph {
private:
    std::vector<std::vector<int>> adjacencyMatrix;
    int vertexCount;
    int edgeCount;
    bool directed;

public:
    Graph();

    void loadGraph(const std::vector<std::vector<int>>& matrix);

    void printGraph() const;

    std::vector<std::vector<int>> getMatrix() const;

    int getVertexCount() const;

    int getEdgeCount() const;

    bool isDirectedGraph() const;

    Graph getTransposedGraph() const;
};

}

#endif