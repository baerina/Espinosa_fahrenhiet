#include <stdio.h>

int main () {

  //variable declarations
  float fahrenheit;
  float celsius;

  //input: ask for the fahrenhiet
  printf("Enter temperature in fahrenheit: ")
    scanf("%f," &fahrenheit)
    printf("fahrenhiet = %f," fahrenhiet);

  //process: conversion of fahrenheit to celsius
  celsius = (fahrenhiet - 32) * 5 / 9;

  //output: display the temperature in celsius
  printf("\nCelsius = %f," celsius;

  return 1;
}
