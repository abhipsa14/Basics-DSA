// Given an array of A of N integers. A pair of indices (i,j) (i < j) is called a "perfect pair" if the product of elements at these indices is a perfect square. A perfect square is a positive integer which is a product of an integer with itself. Find the number of perfect pairs in A.

// Input Format
// First line contains a single integer T denoting the number of test cases.
// The first line of each test case contains single integer N denoting the length of A.
// The next line contains N space-seperated integers A[i].
// Output Format
// For every test case, find the number of perfect pairs in A.

// Constraints
// 1 ≤ T ≤ 200
// 1 ≤ N ≤ 10^5
// 1 ≤ A[i] ≤ 10^6
// 1 ≤ X ≤ N
// sum of N over all test cases is less than 2 * 10^5

// Subtasks
// Subtask #1 (20 points): It is guaranteed that N ≤ 100 and A[i] ≤ 10^4 and T ≤ 10 in the first subtask.
// Subtask #2 (80 points): Original constraints.

// Sample 0
// Input
// 2
// 5
// 1 4 2 5 5
// 3
// 13 12 7
// Output
// 2
// 0
// Explanation
// Here in the first test case the perfect pairs are (1, 2) and (4, 5). Where A[i]*A[j] is a perfect square.

// In the second test case no pair has product as perfect squares.