/*
    Problem statement : Accept string from user and return the number of VOWELS from that string.
    (AEIOU / aeiou)
 
 Input : "Hello"
 Output : 2

 Input : "Hello World"
 Output : 3
 
 Input : "AE Demo"
 Output : 4
 */
 
 
 #include<stdio.h>
 
 int CountVowels(char str[])
 {
	 int i = 0;
	 int iCount = 0;
	 
	 while(str[i] != '\0')
	 {
		 if(
		     (str[i] == 'a') || (str[i] == 'A') || (str[i] == 'e') || (str[i] == 'E') ||(str[i] == 'i') || (str[i] == 'I') || (str[i] == 'o') || (str[i] == 'O') || (str[i] == 'u') || (str[i] == 'U') 
	       )
		   {
			   iCount++;
		   }
		   
		 i++;
	 }
	 return iCount;
 }
 
 int main()
 {
	 char carr[30];
	 int iRet =0;
	 
	 printf("Enter the string \n");
	 scanf("%[^'n']s",carr);
	 
	 iRet = CountVowels(carr);
	 
	 printf("No of vowels are : %d", iRet);
	 
	 return 0;
 }