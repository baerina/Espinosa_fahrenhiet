#include <stdio.h>

int main () 
{

  //variable declarations
  float fahrenheit;
  float celsius;

  //input: ask for the fahrenheit
  printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("fahrenheit = %f", fahrenheit);

  //process: conversion of fahrenheit to celsius
  celsius = (fahrenheit - 32) * 5 / 9;

  //output: display the temperature in celsius
  printf("\nCelsius = %f", celsius);

  return 0;
}
