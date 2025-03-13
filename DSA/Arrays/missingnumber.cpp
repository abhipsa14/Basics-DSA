/*
Pg: Find the number that is missing in the array between 1 to n
like 1,2,4,5 and n is 5 
then 3 is missing!!!
Brute force: check every number using linear search method
for(i=1;i<=N;i++){
flag=0
for(j=0;j<n-1;j++)
{
if(arr[j]==i)
{
flag=1;
break;}}
if(flag==0)
return i;}
time complexity: O(n*n)
space : o(1)
---> better approach:
using hashing
hash[n+1]={0};
for(i=0;i<n;i++){
hash[arr[i]]=1;
}
for(i=1-->n){
if(hash[i]==0)
return i;}
time complexity= o(n)+o(n)
space=o(n)
*/
/*
OPTIMAL
M1: Sum approach---> O(n) space:O(1)
M2: XOR approach
-->(1^1)-->0
(2^2)-->0
3-->3
(4^4)-->0
(5^5)-->0
this will give 3 itself as 0 xor any number is number itself
xor1=0
->for(i=1-->N;i++)
xor1=xor1^i;
xor2=0
->for(i=0;i<n-1;i++){
xor2=xor2^arr[i]}
xor1^xor2
time complexity: O(2N)

we can remove one loop by doing
for(i=0;i<N-1;i++){
xor2=xor2^arr[i]
xor1=xor1^(i+1)
}
xor1=xor1^N
xor1^xor2

*/