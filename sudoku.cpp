#include<iostream>
using namespace std;

#define UNASSIGNED 0
#define sqn 2
# define N 4

bool FindUnassignedLocation(int grid[N][N],int &row,int &col);

bool usedInRow(int grid[N][N],int row,int num)
{ 
   for(int col=0;col<N;col++)
      if(grid[row][col]==num)
        return true;
   
    
    return false;
 }

bool usedInCol(int grid[N][N],int col,int num)
{
   for(int row=0;row<N;row++)
     if(grid[row][col]==num)
          return true;
 
   
   return false;
}

bool usedInBox(int grid[N][N],int boxstartrow,int boxstartcol,int num)
{ 
   for(int row=0;row<sqn;row++)
      for(int col=0;col<sqn;col++)
         if(grid[row+boxstartrow][col+boxstartcol]==num)
            return true;
 
   return false;
}
bool issafe(int grid[N][N],int row,int col,int num)
{
   return !usedInRow(grid,row,num) && !usedInCol(grid,col,num) && !usedInBox(grid,row-row%sqn,col-col%sqn,num);
 }



bool FindUnassignedLocation(int grid[N][N],int &row,int &col)
{ 
   for(row=0;row<N;row++)
       for(col=0;col<N;col++)
          if(grid[row][col]==UNASSIGNED)
              return true;
  
   return false;
}
 
bool SolveSudoku(int grid[N][N])
{ 
   int row,col;
   if(!FindUnassignedLocation(grid,row,col))
       return true;
   for(int num=1;num<=N;num++)
     {
         if(issafe(grid,row,col,num))
           {  
              grid[row][col]=num;
               if(SolveSudoku(grid))
                  return true;
               grid[row][col]=UNASSIGNED;
           }
     }
       return false;
 }

int main()
{ 
   int grid[N][N];
   cout<<"Enter the elements:";
   for(int i=0;i<N;i++)
     for(int j=0;j<N;j++)
       cin>>grid[i][j];
  
   if(SolveSudoku(grid)==true)
    {
       cout<<"Solution:";
      for(int row=0;row<N;row++)
         for(int col=0;col<N;col++)
           cout<<grid[row][col]<<" ";
        cout<<"\n";
     }
 else
   cout<<"NO solution";
 
return 0;
}