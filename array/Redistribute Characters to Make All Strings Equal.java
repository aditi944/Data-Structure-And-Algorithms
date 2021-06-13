class Solution {
    public boolean makeEqual(String[] words) {
        
        
       int n=words.length;
        
        int hash[]=new int[26];
        
    
        for(int i=0;i<n;i++){
           
           for(int j=0;j<words[i].length();j++){
               hash[words[i].charAt(j)-'a']++;

        }
    
        
    }
        for(int i=0;i<26;i++){
            if(hash[i]%n!=0)
                return false;
        }
        return true;
}
}