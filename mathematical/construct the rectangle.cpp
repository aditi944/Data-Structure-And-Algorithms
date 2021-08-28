 int a = sqrt(area),i;
        for(i=a;i>=1;i--) {
            if(area%i==0) break;
        }
        return {area/i,i};
