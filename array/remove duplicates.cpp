int n=nums.size();
if(n==0) return 0;
int count=1;
for(int i=1;i<n;i++)
{
if(nums[i]-nums[i-1]!=0)
{
nums[count]=nums[i];
count++;
}
}
return count;
