// In a rooted tree, a vertex is called nice if it has exactly 1 child.

// You are given a rooted tree of N vertices, labelled 1 to N , rooted at 1. For each vertex, find the k-th closest ancestor which is nice if it exists, otherwise output -1.

// The tree is given as an array p2, p3, ..., pN, where pi is the parent of the i-th vertex.

// You must answer t test cases.

// Constraints
// 1 ≤ T ≤ 10
// 1 ≤ k ≤ N ≤ 200000
// 1 ≤ pi ≤ N
// pi != i for 2 ≤ i ≤ N
// The given graph is a tree
// Sum of N across all test cases does not exceed 2 * 10^5

// Subtask 1: 20%
// 1 <= k <= N <= 2000
// Sum of N across all test cases does not exceed 2000
// Subtask 2: 30%
// 1 <= N <= 2 * 10^5
// k = 1
// Sum of N across all test cases does not exceed 2 * 10^5
// Subtask 3: 50%
// Original constraints
// Input Format
// The first line of the input contains a single integer t, the number of test cases.
// The first line of each test case contains 2 space separated integers, N and k.
// The second line of each test case contains N-1 space separated integers p2, p3, ..., pN where pi is the parent of the i-th vertex.
// Output Format
// For each test case, output one line containing N space separated integers A1, A2, ..., AN, where Ai is the k-th closest nice ancestor of i if it exists, otherwise it is -1.

// Sample 0
// Input
// 2
// 5 1
// 1 1 2 3
// 6 1
// 1 2 3 4 5
// Output
// -1 -1 -1 2 3 
// -1 1 2 3 4 5 
// Explanation
// The tree in the first test case is as shown below:

// tree 1