class Solution {
    public boolean backspaceCompare(String S, String T) {
        
        int l1=S.length();
        int l2=T.length();
        int i=0,j=0;
        StringBuilder myName = new StringBuilder(S);
        
        List<Character> z = new ArrayList<>();

        
        while(i!=l1)
        {
            if(S.charAt(i)=='#')
            {
                for(j=i-1;j>=0 && myName.charAt(j)=='#';j--)
                {
                    
                }
                if(j>=0)
                {
                     System.out.println(j);
                    myName.setCharAt(j, '#');
                }
            }
            
            i++;
        }
        
        
        System.out.println(myName);
        
        // String m="";
        // StringBuilder n1 = new StringBuilder(m);
        
     
        i=0;j=0;
        while(i!=l1)
        {
            if(myName.charAt(i)!='#')
            {
             //   n1.setCharAt(j++,myName.charAt(i));
                z.add(myName.charAt(i));
            }
            i++;
        }
//         n1.setCharAt(j,'\0');
//         System.out.println("OP " + n1);
        
        
        
        
        i=0;j=0;
        StringBuilder myName1 = new StringBuilder(T);
        
        List<Character> z1 = new ArrayList<>();

        
        while(i!=l2)
        {
            if(T.charAt(i)=='#')
            {
                for(j=i-1;j>=0 && myName1.charAt(j)=='#';j--)
                {
                    
                }
                if(j>=0)
                {
                     System.out.println(j);
                    myName1.setCharAt(j, '#');
                }
            }
            
            i++;
        }
        
        
        System.out.println(myName1);
        
        // String m="";
        // StringBuilder n1 = new StringBuilder(m);
        
        
        i=0;j=0;
        while(i!=l2)
        {
            if(myName1.charAt(i)!='#')
            {
             //   n1.setCharAt(j++,myName.charAt(i));
                z1.add(myName1.charAt(i));
            }
            i++;
        }
        
        int k = z.size();
        int k1 = z1.size();
        
        if(k!=k1)
            return false;
        
        j=0;
        
        while(j!=k)
        {
            if(z.get(j)!=z1.get(j))
            {
                return false;
            }
            j++;
        }
            
//         for (Character zz : z) {
//     System.out.println(zz);
// }
        
      
        return true;
    }
}