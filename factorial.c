#include<stdio.h>

int factorial(int number)
{
    // TODO:- Your logic here
    
    
    int i;
	int fact = 1;
	if(number<0)
	return -1;
	if(number<=1)
	return 1;
	for(i = 2; i <= number; i = i + 1)
		fact = fact * i;
	return fact;	
	
    
}

// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int main() {
  int num = 0, N = 0;

  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
    
  return 0;
}