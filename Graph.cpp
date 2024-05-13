//Barak Zalman
// Id: 325706661
//email: barak12395@gmail.com


#include "Graph.hpp"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <limits>

namespace ariel {

Graph::Graph() : vertexCount(0), edgeCount(0), directed(false) {}

void Graph::loadGraph(const std::vector<std::vector<int>>& matrix) {
    if (matrix.empty()) {
        throw std::invalid_argument("The input matrix is empty.");
    }

    adjacencyMatrix = matrix;
    vertexCount = matrix.size();
    edgeCount = 0;

    for (int i = 0; i < vertexCount; i++) {
        if (matrix[i].size() != vertexCount) {
            throw std::invalid_argument("The graph is not a square matrix.");
        }
        for (int j = 0; j < vertexCount; j++) {
            if (matrix[i][j] != 0) {
                edgeCount++;
            }
        }
    }

    // Assuming an undirected graph
    directed = false;
}

void Graph::printGraph() const {
    std::cout << "Graph with " << vertexCount << " vertices and " << edgeCount << " edges." << std::endl;
    for (const auto& row : adjacencyMatrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> Graph::getMatrix() const {
    return adjacencyMatrix;
}

int Graph::getVertexCount() const {
    return vertexCount;
}

int Graph::getEdgeCount() const {
    return edgeCount;
}

bool Graph::isDirectedGraph() const {
    return directed;
}

Graph Graph::getTransposedGraph() const {
    Graph transposedGraph;
    std::vector<std::vector<int>> transposedMatrix(vertexCount, std::vector<int>(vertexCount, 0));

    for (int i = 0; i < vertexCount; i++) {
        for (int j = 0; j < vertexCount; j++) {
            transposedMatrix[j][i] = adjacencyMatrix[i][j];
        }
    }

    transposedGraph.loadGraph(transposedMatrix);
    return transposedGraph;
}

} 