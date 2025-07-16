# Problem Statement
# There is a directed graph with 
# N vertices and 
# M edges, where vertices are numbered from 
# 1 to 
# N and edges are numbered from 
# 1 to 
# M. Edge 
# i is a directed edge from vertex 
# A 
# i
# ​
#   to vertex 
# B 
# i
# ​
#   with weight 
# W 
# i
# ​
#  .

# Find the minimum value of the bitwise 
# XOR of the weights of edges included in a walk from vertex 
# 1 to vertex 
# N.
# What is a walk from vertex 
# 1 to vertex 
# N?
# Intuitively, it is "a path from vertex 
# 1 to vertex 
# N that may visit the same vertex or edge multiple times." Formally, it is a sequence of edges 
# (e 
# 1
# ​
#  ,…,e 
# k
# ​
#  ) that satisfies all of the following conditions:

# e 
# 1
# ​
#   starts at vertex 
# 1.
# For all 
# 1≤i<k, the endpoint of 
# e 
# i
# ​
#   and the starting point of 
# e 
# i+1
# ​
#   are the same.
# e 
# k
# ​
#   ends at vertex 
# N.
