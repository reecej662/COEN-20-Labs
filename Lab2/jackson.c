//
//  Lab 2
//  jackson.c
//  Reece Jackson
//
//  Created by Reece Jackson on 9/30/15.
//
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 8

void Dec2Bin(unsigned int decimal, int binary[8]);
void PrintBin(int binary[8]);

//  Function: Main
//
//  Purpose: Prompts the user for input, and calls functions to print the 8 least significant bits
//

int main(int argc, const char * argv[]) {

    unsigned int input;
    int binary[8];
    
    printf("Please enter a decimal integer: ");
    scanf("%d", &input);
    
    Dec2Bin(input, binary);
    PrintBin(binary);
    
    return 0;
}

//  Function: Dec2BIN
//
//  Purpose: Extracts bits from first variable and fills the elements of the array
//

void Dec2Bin(unsigned int decimal, int binary[8]) {

    for (int i = 0; i < MAX; i++) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }
    
}

//  Function: PrintBin
//
//  Purpose: Prints the eight bits of an inputted binary value
//

void PrintBin(int binary[8]) {
    
    printf("The 8 binary bits are: ");
    
    for(int i = 0; i < MAX; i++) {
        printf("%d", binary[(MAX - 1) - i]);
    }
    
    printf("\n");
}