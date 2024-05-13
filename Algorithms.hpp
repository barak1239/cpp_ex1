//Barak Zalman
// Id: 325706661
//email: barak12395@gmail.com

#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Graph.hpp"
#include <string>
#include <vector>
#include <iostream>

namespace ariel {

class Algorithms {
public:
    static bool isConnected(const Graph& g);
    static std::string shortestPath(const Graph& g, int start, int end);
    static bool isContainsCycle(const Graph& g);
    static std::string isBipartite(const Graph& g);
    static void negativeCycle(const Graph& g);

private:
    static bool bfs(const Graph& g, int start, std::vector<bool>& visited);
    static std::string dijkstraShortestPath(const Graph& g, int start, int end);
    static bool dfs(const Graph& g, int vertex, std::vector<bool>& visited, std::vector<int>& parent);
    static bool isBipartiteUtil(const Graph& g, int src, std::vector<int>& colorMap);
    static bool bellmanFordNegativeCycle(const Graph& g);
};

} 

#endif 