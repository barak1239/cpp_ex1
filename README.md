ex1- graphs and algorithms.
This project implements a Graph class and various graph algorithms using C++.
The Graph class represents a graph using an adjacency matrix, and the Algorithms class provides implementations of common graph algorithms such as connectivity check, shortest path, cycle detection, and bipartite graph check.
In this project we have:
  Graph representation using an adjacency matrix
  Support for directed and undirected graphs
  Loading a graph from an adjacency matrix
  Printing the graph representation
  Retrieving the number of vertices and edges in the graph
  Checking if the graph is directed or undirected
  Obtaining the transposed graph
  Graph algorithms:
  Connectivity check: Determines if the graph is connected
  Shortest path: Finds the shortest path between two vertices using Dijkstra's algorithm
  Cycle detection: Checks if the graph contains a cycle
  Bipartite graph check: Determines if the graph is bipartite and returns the bipartition of vertices
  Negative cycle detection: Detects the presence of a negative cycle in the graph.
  
  
  Implementation
The project consists of the following main components: 
  Graph.hpp and Graph.cpp: Implement the Graph class with methods for loading, printing, and manipulating the graph.
  Algorithms.hpp and Algorithms.cpp: Implement the Algorithms class with various graph algorithms.
  By using algorithms that will help us like breadth-first search (BFS), depth-first search (DFS), Dijkstra's algorithm, and graph coloring we get to good implementations that are easy to understand.
  I didn't do using namespace std; as it is considered bad practice.
  


  Usage
To use the Graph and Algorithms classes in your own code, follow these steps:
  Include the necessary header files: "Graph.hpp" and "Algorithms.hpp".
  Create an instance of the Graph class and load the graph using the loadGraph method, passing an adjacency matrix as input.
  Call the desired methods of the Graph class to retrieve information about the graph, such as the number of vertices, number of edges, or the transposed graph.
  Use the static methods of the Algorithms class to perform graph algorithms on the loaded graph, such as connectivity check, shortest path, cycle detection, or bipartite graph check.
