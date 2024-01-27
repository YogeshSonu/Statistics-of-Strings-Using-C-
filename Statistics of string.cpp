/*
	Name:  STATISTICS OF  ENTERED STRING
	Copyright: 
	Author:  YOGESH PUROHIT
	Date: 24/05/22 16:52
	Description:  C++ PROGRAM
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,numbers=0,Vowels=0,space=0,consonants=0,op=0,special=0;
	int alphabets=0, upper=0, lower=0, length=0;
	char cons[50]="bcdfghjklmnpqrstvwxyz";
	char vowel[30]={"a,e,i,o,u"};
	char vowel1[30]={"A,E,I,O,U"};
	char c[50]="{}:;'#_<>.,()[]!@$^*?\|~`&";
	char oper[50]={"+-*%/"} ;
	char cons1[50]="BCDFGHJJKLMNPQRSTVWXYZ";
	char b[100];
	char n1[20]={"1234567890"};
	system("cls");
	cout<<"\nEnter The string:";
	gets(b);
	
	for(i=0;i<strlen(b);i++)
	{
		   for(j=0;j<strlen(n1);j++)
		   {
		   		if(b[i]==n1[j])
		   		{
		   			numbers++;
				 }
				 
		   }
		   for(j=0;(j<strlen(vowel)&&(j<strlen(vowel1)));j++)
		   {
		   		if((b[i]==vowel[j]) || (b[i]==vowel1[j]))
		   		{
		   			Vowels++;
		   			
				 }
		   }
		   for(j=0;(j<strlen(cons) && (j<strlen(cons1)));j++)
		   {
		   		if((b[i]==cons[j]) || (b[i]==cons1[j]))
		   		{
		   			consonants++;
		   		
				 }
		   }
		   
		   if(b[i]==' ')
		   {
		   			space++;
		   			
		   }
		   if((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z'))
		   {
		   		alphabets++;
		   }
		   
		   if(b[i]>='A' && b[i]<='Z') 
		   {
		   		upper++;
		   }
		   if(b[i]>='a' && b[i]<='z') 
		   {
		   		lower++;
		   }
		   for(j=0;j<strlen(c);j++)
		   {
		   		if(b[i]==c[j])
		   		{
		   			special++;
				}
		   }
		   for(j=0;j<strlen(oper);j++)
		   {
		   		if(b[i]==oper[j])
		   		{
		   			op++;
				}
		   		
		   }
	}
	length=strlen(b);
	system("cls");
	cout<<"\n\t\t\tStatistics Of Entered String..........";
	cout<<"\nThe Entered String is:\n\t\t "<<b;
	cout<<"\n\nLength of The String is "<<length;
	cout<<"\nTotal Alphabets in String is "<<alphabets;
	cout<<"\nTotal Upper Letters in String is "<<upper;
	cout<<"\nTotal Lower Letters in String is "<<lower;
	cout<<"\nTotal Numeric Values in String is "<<numbers;
	cout<<"\nTotal Vowels in String is"<<Vowels;
	cout<<"\nTotal Consonants in String is "<<consonants;
	cout<<"\nTotal Spaces in String is "<<space;
	cout<<"\nTotal Special Character in String is "<<special;
	cout<<"\nTotal Operator in String is "<<op;

 return 0;
}

