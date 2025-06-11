// You are currently facing upcoming exams and find yourself in a large library with books arranged in a linear manner on a shelf. Your goal is to read books from left to right in the library, and you have two types of operations to perform:

// Type 1 operation: 1 x - This operation involves reading the next x books, starting from the current book and moving towards the right.
// Type 2 operation: Undo the last operation - This operation undoes the most recent reading operation. This allows you to go back to your previous reading point. When you perform an "Undo" operation, you return to the point in the book sequence where you initiated the last "Read" operation. It is useful for re-reading books you've already covered

// At the end of your library session, tell what's the total number of unique books that you have read at least once. Please note that all the operations provided will be consistent, meaning you will not be given an undo operation that's invalid or impossible.

// Input
// The first line of the input contains a single integer T corresponding to the number of test cases. The T test cases follow.
// The first line of each test case contains an integer N denoting total number of operations you need to apply.
// Each of the next N lines of the test case will contain an operation
// If the operation is of type 1, then the line will contain two integers, i.e. 1, x.
// If the operation is of type 2, then the line will contain only one integer, i.e. 2.

// Output
// For each test case, output an integer corresponding to the total number of books that you read in this library session.

// Constraints
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 105
// 1 ≤ x ≤ 104

// Sample 0
// Input
// 2
// 4
// 1 2
// 1 3
// 2
// 1 4
// 4
// 1 2
// 2
// 1 4
// 2

// Output
// 6
// 4

// Explanation
// For test case 1,

// In the first operation, we read books 1 and 2.
// In the second operation, we read books 3, 4, 5
// In the third operation (which is an undo operation), we now go back to the first operation, i.e. we want to read books again, then we will start from reading book 3
// In the fourth operation, we read 4 books, i.e. book 3, 4, 5 and 6. Thus, the total number of books we read is equal to 6.