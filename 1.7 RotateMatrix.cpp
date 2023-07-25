/*
Given an image represented by an N x N matrix, 
where each pixel in the image is represented by
an integer,write a method to rotate the image by
 90 degrees. 
*/
#include <iostream>
using namespace std;

int RotateArray (int array[][3])
{
    
    return 0;
}







int OutputArray (int array[][3])
{
	int i,j;
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<array[i][j];
		}
		cout<<endl;
	}
    return 0;
}

int main( ) 
{  
	int array[3][3] = {1,2,3,4,5,6,7,8,9} ;
    OutputArray(array);
		
	
	
	
}