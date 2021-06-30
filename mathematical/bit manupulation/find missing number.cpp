    int sum=0,totalsum=0;
        int i=0,j=0;
        int n=nums.size();
        while(j!=n){
            totalsum=totalsum^j;
        }
        while(i<n){
            sum=sum^nums[i];
            i++;
        }
        return totalsum^sum;
        
    }

    //correct

    
    
         int ans = 0;
        int i = 0;
        for(i=0;i<nums.size();i++)
        {
            ans ^= nums[i];
            ans ^= i;
        }
        return ans^i;
    }