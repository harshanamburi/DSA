
  int longestUniqueSubsttr(string S)
    {
       int ans=INT_MIN;
       int i=0;int j=0;
       int n=S.size();
       int arr[26]={0};
       while(j<n)
       {
           arr[S[j]-'a']++;
           while(i<n && arr[S[j]-'a']!=1)
           {
               arr[S[i]-'a']--;
               i++;
           }
           ans=max(ans,j-i+1);
             j++;
       }
       return ans;
    }