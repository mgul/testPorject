int main() 

{ 

long long int c, n=20, fact = 1; 

for (c = 1; c <= n; c++) 
{
 fact = fact * c; 
 printf("Factorial of %I64d = %I64d\n", c, fact); 

}

getch(); 

 return 0; 

}
