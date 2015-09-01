
#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include <fstream>
#include<stdio.h>
#include <ctime>
#include <sstream>
#include <cstdlib>

using namespace std;


//bubble sort optimized
//this bubble sort is faster than a standard bubble sort algorithm,
//in that it keeps track of weither an element was swapped or not 
//if no elements are swapped we can assume the list is sorted
void bubblesortOP1( int * a , int n )
{
//starts timer

    int temp;
	int swaps;
    for( int i = 0 ; i < n - 2 ; i++ )
    {
        swaps=0;
        for ( int j = 0 ; j < n - 1 ; j++ )
        {
            if ( a[j] > a[j + 1] )
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swaps++;
            }
        }
        if( swaps == 0 )
        {


            break;
        }
    }
}


void bubblesort( int * a , int n )
{
//starts timer

    int temp;

    for( int i = 0 ; i < n - 2 ; i++ )
    {
       
        for ( int j = 0 ; j < n - 1 ; j++ )
        {
            if ( a[j] > a[j + 1] )
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
              
            }
        }



        }
    }

void insertionsort ( int arr[], int left, int right )
{
  int i, j;
  for ( i = left + 1; i < right; i++ ) {
    int save = arr[i];
    for ( j = i; j > 0 && arr[j - 1] > save; j-- )
      arr[j] = arr[j - 1];
    arr[j] = save;
  }
}


//swap 2 elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
//partisions arrays
int partition (int arr[], int left, int right)
{
    int pivot = arr[right];    // pivot
    int i = (left - 1);  // Index of smaller element
 
    for (int j = left; j <= right - 1; j++)
    {
        // If current element is smaller than or equal to pivot 
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[right]);  
    return (i + 1);
}
 

void quicksort(int arr[], int left, int right)
{


    if (left < right)
    {
        int par = partition(arr, left, right); 
        quicksort(arr, left, par - 1);
        quicksort(arr, par + 1, right);
    }

}

void quicksortOP1( int arr[], int left, int right )
{


  quicksort( arr, left, right - 1 );

 //uses insertionsort on almost sorted list
  insertionsort ( arr, left, right );


}
int main()
{
	//declarations
	int n=10000;
	int a[10000];

	for(int i=0; i<n; i++)
	{
		a[i] = rand() %100;
	}



clock_t startTime = clock();
	//timed
      
      quicksortOP1(a,0,n-1);		//too fast to tell a difference
	 // quicksort(a,0,n-1);
	 // insertionsort(a,0,n-1);
	 //  bubblesortOP1(a,n-1);     // note this bubble sort is measureabley faster
     // bubblesort(a,n-1);		   // than this bubble sort

	 //end timer
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (float)CLOCKS_PER_SEC;

	  // Displaying Sorted array
		cout<<"ARRAY AFTER SORTING: "<<endl;
   for(int x=0; x<n; x++)
   {
    cout<<a[x]<<" "; 
   }   
   cout<<endl;


  
	cout << "it took " << timeInSeconds << " seconds" <<endl;


	system("PAUSE");
	return 0;

}

