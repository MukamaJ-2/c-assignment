/*
PSEUDOCODE FOR FINDING OUT THE MAXIMUM NUM FROM AN ARRAY

STEP 1: START
STEP 2: INITIALIZE arr[] = {25, 11, 7, 74, 56,44}
STEP 3: length= sizeof(arr)/sizeof(arr[0])
STEP 4: max = arr[0]
STEP 5: SET i=0. REPEAT STEP 6 
STEP 7 i<length
STEP 6: if(arr[i]>max)
              max=arr[i]
STEP 7: i=i+1.
STEP 8: PRINT "The largest element in the given array:" assigning max.
STEP 9: RETURN 0
STEP 9: END.*/

#include <stdio.h>    

int main()    
{       
    int arr[] = {25, 11, 7, 74, 56, 44};      

    int length = sizeof(arr)/sizeof(arr[0]);        
    int max = arr[0];    

    for (int i = 0; i < length; i++) {        
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("The largest element in the given array: %d\n", max);    
    return 0;    
}   
