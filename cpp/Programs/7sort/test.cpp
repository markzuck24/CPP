#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	int t,i,j,l,res;
	cin >> t;
	
	for(i=0;i<t;i++)
	{
	    double a[3], b[3], c[3], d[3],e[3];
	   // int cc;
	   // double d[3];
	   // list<int> c;
	    
	    for(j=0;j<3;j++)
	        cin >> a[j];
	        
	    for(j=0;j<3;j++)
	        cin >> b[j];
	        
// 	  int k=0;
	        
	   for(j=0;j<3;j++)
	   {
	       c[j]=b[j]-a[j];
	   }
	       
	   for(j=0;j<3;j++)
	   {
	         d[j] = b[j]/a[j];
	       // cout << d[j];
	   }
	      
	        
	  for(j=0;j<3;j++)
	        e[j] = (int)b[j]%(int)a[j];
	        
	  if((c[0]==c[1]) && (c[1]==c[2]) && (c[2]==0))
	  {
	   //   cout << "adi";
	       res=0;
	      
	  }
	 
	        
	 else if(((c[0]==c[1]) && (c[1]==c[2]))|| ((d[0]==d[1]) && (d[1]==d[2])) || (d[0]==d[1] && c[2]==0)||(d[2]==d[1] && c[0]==0)||(d[0]==d[2] && c[1]==0) || (c[0]==c[1] && c[2]==0) || (c[0]==c[2] && c[1]==0) || (c[2]==c[1] && c[0]==0) || (c[0]==c[1] && c[1]==0) || (c[0]==c[2]&& c[2]==0) || (c[2]==c[1] && c[1]==0)) 
	  {
	      res = 1;
	  }
	  else if(c[0]==0 || c[1]==0 || c[2]==0 || c[0]==c[1] || c[0]==c[2] || c[2]==c[1] || d[0]==d[1] || d[0]==d[2] || d[2]==d[1] || e[0]==e[1] || e[0]==e[2] || e[2]==e[1])
	  {
	      res = 2;
	  }
	  else 
	  res = 3;
	  
	  
	  cout << res << "\n";
	        
	        
	}
}


