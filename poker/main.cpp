//Program to find which hand do you have in a game of poker

#include <iostream>
#include <stdio.h>

using namespace std;

class poker
{
private:
char ip[3],suit[5]; //** Changed suit,digit[6] to suit[5] , digit[5]
int digit[5], i, j, k, sum, str, str2, flush, ace, four, three, pairs;

public:
void input();
void bsort();
void check();
};

void poker :: input() //input function
{
i=0, sum=0;
//cout<<"Enter the 5 cards"<<endl;
while (i<5)
{

k=0;
cin>>ip;
switch (ip[k])
{
case 'T': digit[i]=10; break;
case 'J': digit[i]=11; break;
case 'Q': digit[i]=12; break;
case 'K': digit[i]=13; break;
case 'A': digit[i]=14; break;
default : digit[i]=ip[k]-48;
}
suit[i]=ip[k+1];
sum+=ip[k+1]; //Here we are adding all characters by their ASCII code and saving the sum in an int variable 'sum'
i++;
}
}

void poker :: bsort() //simple bubble sort function
{

int temp;
for (i=0;i<5;i++)
for(j=0;j<5-i-1;j++)
{
if(digit[j]>digit[j+1])
{
temp=digit[j];
digit[j]=digit[j+1];
digit[j+1]=temp;
}
}
}

void poker :: check()
{
str=0;
str2=0;
flush=0;
ace=0;
four=0;
three=0;
 pairs=0;

int tst;
tst=suit[0];

//Here we are establishing conditions for checking

if ((digit[4]-digit[0])==4) //** consecutive digits
str++;
if((digit[0]==2)&&((digit[3]-digit[0])==3)) // ???
str2++;
if(digit[4]==14) //** Presence of ace
ace++;
if(sum==(5*tst)) //** All cards of the same suit
flush++;
if((digit[0]==digit[3])||(digit[1]==digit[4])) //*Presence of 4 same cards
four++;
if ((digit[0]==digit[2])||(digit[1]==digit[3])||(digit[2]==digit[4])) //Presence of 3 same cards
three++;
k=0;
while(k < 4) //** Changed from k!=4  to k < 4
{
if(digit[k]==digit[k+1])
{
pairs++;
k+=2;
}
else
k++;
}

//Actual checking for hands in poker begins here

if((ace==1)&&(str==1)&&(flush==1))
cout<<"royal flush"<<endl;

else if (((str==1)&&(flush))||((str2==1)&&(flush==1)))
 cout<<"straight flush"<<endl;

else if(four==1)
cout<<"four of a kind"<<endl;

else if((pairs==1)||(three==1))
cout<<"full house"<<endl;

else if(flush==1)
cout<<"flush"<<endl;

else if((str==1)||(str2==1))
cout<<"straight"<<endl;

else if(three==1)
cout<<"three of a kind"<<endl;

else if(pairs==2)
cout<<"two pairs"<<endl;

else if(pairs==1)
cout<<"pair"<<endl;

else
cout<<"high card"<<endl;
}

int main()
{
//Creation of object of class 'poker'
poker P;
int x;
cin>>x;

//Call to functions
for(int y=1;y<=x;y++)
{
P.input();
P.bsort();
P.check();
}


return 0;
}

