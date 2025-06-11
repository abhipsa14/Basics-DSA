// You are given an array A consisting of N positive integers. A subarray [L,R] is said to be balanced if the sum of elements from index L to index R (both inclusive) is equal to the length of the subarray.

// You are given Q queries in which each query has an integer X. In order to answer the query, you should find the number of balanced subarrays between index 1 and index X in the array A, i.e. in the subarray A[1], A[2], ... A[X]

// Input Format
// The first line of the input contains an integer T denoting the number of test cases.
// The first line of each test case contains two space-seperated integers N and Q denoting the length of array A and number of queries.
// The next line contains N space-seperated integers, i-th of which denotes A[i].
// The next line contains Q space-seperated integers denoting index X for the corresponding query.
// Output Format
// For each test case, for every query, print a single line containing the answer for the query.

// Constraints
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ Q ≤ 105
// 1 ≤ A[i] ≤ 105
// 1 ≤ X ≤ N
// sum of N and Q over all test cases is less than 4 * 105
// Subtasks
// Subtask #1 (20 points): It is guaranteed that N ≤ 1000 and Q ≤ 1000 and T <= 10 in the first subtask.
// Subtask #2 (80 points): Original constraints.

// Sample 0
// Input
// 1
// 6 2
// 1 5 3 2 1 6
// 1 3
// Output
// 1
// 1
// Explanation
// Here if you see the subarrays from index 1 to index 1 is only 1, i.e. [1]. Whose length and sum both are equal. And for subarrays from index 1 to index 3 are [1], [1, 5], [1, 5, 3], [5, 3], [3]. Out of which only one subarray has sum and length equal.