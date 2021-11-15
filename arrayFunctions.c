#include <stdio.h>

//Prototypes
int sumArray(int array[], int sizeArray);
double meanArray(int array[], int sizeArray);
void copyArray(int firstArray[], int newArray[], int sizeArray);
void displayArray(int array[], int sizeArray);
void maxArray(int array[], int sizeArray, int maxValue);
void orderArray(int array[], int sizeArray);
void exchangeValue(int* a, int* b);
void bubbleMethod(int array[], int arraySize);

//Main function
int main()
{
    printf("*************************** HAVE FUN WITH ARRAY *************************** ");
    return 0;
}

/*
*function copyArray
*return nothing
*copy the firstArray into the newArray
*/
void copyArray(int firstArray[], int newArray[], int sizeArray)
{
    int i, j;
    for(i = 0; i < sizeArray; i++)
    {
        newArray[i] = firstArray[i];
    }
}

/*
*function meanArray
*return --> double mean
*the sum of the array's elements
*/
double meanArray(int array[], int sizeArray)
{
    int i;
    double mean = 0;
    for(i = 0; i < sizeArray; i++)
    {
        mean += array[i];
    }

   mean = mean / sizeArray;
   return mean;
}


/*
*funtion sum array 
*return --> int sum
*the sum of the elements of a array
*/
int sumArray(int array[], int sizeArray)
{
    int i, sum = 0;
    for(i = 0; i < sizeArray; i++)
    {
        sum += array[i];
    }

    return sum;
}

/*
*function displayArray
*return nothing
*display the elements of array
*/
void displayArray(int array[], int sizeArray)
{
    int i;
 
    for (i = 0 ; i < sizeArray ; i++)
    {
        printf("%d\n", array[i]);
    }
}

/*
*function maxArray
*return nothing
*set to 0 all the value less than maxValue
*/
void maxArray(int array[], int sizeArray, int maxValue)
{
    int i;
     for (i = 0 ; i < sizeArray ; i++)
    {
        if(array[i] < maxValue)
        {
            array[i] = 0;
        }
    }
}

/*
*function exchangeValue
*return nothing
*exchange two values a and b
*/
void exchangeValue(int* a, int* b)
{
    int tempValue;
    tempValue = *a;
    *a = *b;
    *b = tempValue;
}

/*
*function bubbleMethod
*return nothing
*order the array's elements in ascending order using the bubble method
*/
void bubbleMethod(int array[], int arraySize)
{
    int i, j, tmp;

    for (i=0 ; i < arraySize-1; i++)
    {
        for (j=0 ; j <arraySize-i-1; j++)
        {
            if (array[j] > array[j+1]) 
                {
                    tmp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = tmp;
                }
        }
    }

}
