#include <stdio.h>

int main()
{
    int vector[4];
    //Atribuindo valores
    //Adding values
    vector[0]= 10.2; //1
    vector[1]= 46; //2
    vector[2]= 41; //3
    vector[3]= 60; //4
    
    // out of bounds or outside of limits or out of limit
    vector[4]= 200;
    
    for (int i=0; i < 3; i++)
    {
        printf("Vetor(%d) =   %d\n", i, vector[i]);
    }

  return 0;
}