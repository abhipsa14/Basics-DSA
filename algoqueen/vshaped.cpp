// You are given an array A of N distinct points on a 2D-plane.

// Count the number of V shapes.

// A V shape is triple (i,j,k) such that:

// A[i].x < A[j].x < A[k].x
// A[i].y > A[j].y and A[k].y > A[j].y
// Input Format
// First line contains a single integer T denoting the number of test cases.
// The first line of each test case contains a single integer N denoting the number of points in the plane.
// The next N lines contains 2 space separated integers x y where the i-th line denotes A[i].x and A[i].y respectively.
// Output Format
// For every test case print the number of V shapes.

// Constraints
// 1 ≤ T ≤ 20000
// 3 ≤ N ≤ 200000
// -5 * 10^8 ≤ x,y ≤ 5 * 10^8
// sum of N over all test cases is less than 2 * 10^5

// Subtasks
// Subtask #1 (20 points): It is guaranteed that sum of N over all test cases does not exceed 2000 in the first subtask.
// Subtask #2 (80 points): Original constraints.

// Sample 0
// Input
// 2
// 4
// 1 4
// 2 1
// 3 1
// 4 5
// 4
// 1 8
// 1 4
// 1 0
// 5 4
// Output
// 2
// 0
// Explanation
// In the first test case, the two V shapes are (1, 2, 4) and (1, 3, 4).
// In the second test case, there are no V shapes.