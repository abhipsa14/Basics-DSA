num=int(input())
nums=list(map(int,input().split()))
age = int(input())
nums.sort()
ans=0
for i in range(num):
    if nums[i] >=age:
        ans+=1
print(ans)