/*
Given an image represented by an N x N matrix, 
where each pixel in the image is represented by
an integer,write a method to rotate the image by
 90 degrees. 
*/
#include <iostream>
using namespace std;



int main( ) 
{  
    int n = 3;
	int array[3][3] = {1,2,3,4,5,6,7,8,9} ;
		
	int i,j;
	
	cout<<"Printing a 90 degree rotated 2D Array:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<array[i][j];
		}
		cout<<endl;
	}
}