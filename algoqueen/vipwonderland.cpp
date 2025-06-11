// Lucy is at Wonderla to enjoy her favourite ride Bla. Only one person can ride Bla at a time. There are two queues for the ride, a VIP queue and a normal queue. For every one VIP person in the queue, three people from the normal queue are allowed to ride. The entry starts from the VIP queue.

// If there are 2 VIPs and 7 normal people. Then, the turn to ride will be

// VIP person 1
// normal person 1
// normal person 2
// normal person 3
// VIP person 2
// normal person 4
// normal person 5
// normal person 6
// normal person 7

// Lucy is a VIP and has joined at the end of the VIP queue.

// It takes exactly X minutes for a person to ride Bla. Find out at what time (in minutes) did Lucy finished her ride.

// Input Format
// First line contains a single integer T denoting the number of test cases.
// The next line contains three space-seperated integers N, V, and X, denoting the number of people in the normal queue, the number of people in the VIP queue (note that it's excluding Lucy), and minutes it takes for a person to finish the ride.

// Output Format
// For every test case, print how much time it will take for Lucy to finish enjoying the ride.

// Constraints
// 1 ≤ T ≤ 20
// 0 ≤ N ≤ 100
// 0 ≤ V ≤ 20
// 1 ≤ X ≤ 20

// Sample 0
// Input
// 2
// 15 2 10
// 0 0 5

// Output
// 90
// 5

// Explanation
// In the first test case, Lucy joins the VIP Queue at the 3rd place, i.e. there are two VIP people infront of her. The first VIP person takes 10 minutes. Then 3 people from normal queue will take 10 minutes each. Then the 2nd person in VIP queue takes 10 minutes and then 3 people from normal queue take 10 minutes each. Now, it's Lucy's turn. She will take 10 minutes total to finish the ride. Overall, Lucy finished her ride at 90 minutes mark.

// In the second case, there is no one in normal or vip queue, so Lucy is the first one to enjoy the ride which takes her 5 minutes.