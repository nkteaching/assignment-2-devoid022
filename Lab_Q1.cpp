#include<iostream>
#define n 5
using namespace std;
int maze[n][n] =  
{
   {1, 0, 0, 0, 0},
   {1, 1, 0, 1, 0},
   {0, 1, 1, 1, 0},
   {0, 0, 0, 1, 0},
   {1, 1, 1, 1, 1}
};

int sol[n][n];  
void showPath() 
{
   for (int i=0;i<n; i++) 
   {
      for (int j=0; j<n;j++)
         cout<<sol[i][j]<<" ";
      cout << endl;
   }
}

bool isValidPlace(int x, int y) 
{
   if(x>=0 && x<n && y>=0 && y<n && maze[x][y]==1)
      return true;
   return false;
}

bool solveRatMaze(int x, int y) 
{
   if(x==n-1 && y==n-1) 
   { 
      sol[x][y]=1;
      return true;
   }

   if(isValidPlace(x, y)==true) 
   {     
      sol[x][y]=1;
      if (solveRatMaze(x+1, y)==true) 
	  {
	  	   return true;
	   } 
      
      if (solveRatMaze(x, y+1)==true)     
	  {
	  	 return true;
	   } 
    
      sol[x][y]=0;  
      return false;
   }  
   return false;
}

bool Solution() 
{
   if(solveRatMaze(0, 0)==false) 
   {
      cout << "There is no path";
      return false;
   }
   showPath();
   return true;
}

int main() 
{
   Solution();
}
