# [Count Strongly Connected Components](https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1)
## Medium
Given a directed graph with V vertices labeled from 0&nbsp;to V - 1, represented by an adjacency list adj, find number of strongly connected components (SCCs) in the graph. A strongly connected component is a maximal set of vertices such that every vertex is reachable from every other vertex in the same component.Examples:Input: adj[][] = [[1], [2], [0, 3], [4], [3, 5], []]Output: 3Explanation: The strongly connected components are: {0, 1, 2},{3, 4} and {5}. Therefore, the total number of SCCs is 3.
 Input: adj[][] = [[1], [2], [0]]Output: 1
Explanation: All of the nodes are connected to each other. So, there's only one SCC.