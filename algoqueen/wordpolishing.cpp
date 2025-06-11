// You are given an unpolished log of wood of length N, and an array of A of length N, where Ai is the cost of polishing a log of length i (1 <= i <= N ). You can divide a log into two parts with cost X. You can join two or more logs into a single log with cost Y. You can polish a log directly, or break it into pieces, polish the pieces and put them back together.

// If you want finally a polished log of wood of length N, find the minimum cost for the same.

// Input Format
// First line contains a single integer T denoting the number of test cases.
// The first line of each test case contains three space-seperated integers N and X and Y.
// The next line contains N space-seperated integers A[i].
// Output Format
// For every test case, find the minimum cost to get a polished log of wood of length N.

// Constraints
// 1 ≤ T ≤ 200
// 1 ≤ N ≤ 1000
// 1 ≤ X, Y, A[i] ≤ 10^9
// sum of N over all test cases is less than 2 * 10^4

// Sample 0
// Input
// 2
// 5 1 1
// 1 13 17 12 20
// 5 3 1
// 2 3 4 5 4
// Output
// 10
// 4
// Explanation
// Here in the first test, it is optimal to divide the given log of length 5 into 5 logs of length 1, but cutting 4 times hence cutting cost = 4. Then we polish each of the 5 individually for a total cost of 5. And then we join all of them for a cost of 1 to get a polished log of length 5. Hence total cost = 5 + 4 + 1 = 10 which is minimum.

// In the second test case, the cost to polish log of length 5 directly is 4, which is the most optimal.