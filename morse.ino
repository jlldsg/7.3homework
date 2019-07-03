#include <Morse.h>
Morse morse(13);
string text="";
string morse="";
int n=0,t=0,i,x,k=0,m=0;
char MORSE[][4]=
{
  {'.','-','*','*'},//A
  {'-','.','.','.'},//B
  {'-','.','-','.'},//C
  {'-','.','.','*'},//D
  {'.','*','*','*'},//E
  {'.','.','-','.'},//F
  {'-','-','.','*'},//G
  {'.','.','.','.'},//H
  {'.','.','*','*'},//I
  {'.','-','-','-'},//J
  {'-','.','-','*'},//K
  {'.','-','.','.'},//L
  {'-','-','*','*'},//M
  {'-','.','*','*'},//N
  {'-','-','-','*'},//O
  {'.','-','-','.'},//P
  {'-','-','.','-'},//Q
  {'.','-','.','*'},//R
  {'.','.','.','*'},//S
  {'-','*','*','*'},//T
  {'.','.','-','*'},//U
  {'.','.','.','-'},//V
  {'.','-','-','*'},//W
  {'-','.','.','-'},//X
  {'-','.','-','-'},//Y
  {'-','-','.','.'},//Z
}
void setup()
{
  serial.begin(9600);
}
void loop()
{
  while(serial.available()>0)
  {
    t=1;
    text +=char(serial.read());
    n++;
  }
  if(t)
  {
    for(i=0;i<n;i++)
    {
      if(str[i]>=97 and str[i]<=122)
        for(x=0;x<4;x++)
          morse +=char(MORSE[int(str[i]-97)][x]);
      else
      {
        morse +=' ';
        k++;
      }
    }
  }
  for(i=0;i<4*n+k-1;i++)
  {
    if(morse[i]=='.' or and morse[i+1]!=' ')
    {
      morse.dot;
      m++;
    }
    else if(morse[i]=='-' and morse[i+1]!=' ')
    {
      morse.dash;
      m++;
    }
    else if(morse[i]='*')
      m++;
    else if((morse[i]!=' 'or morse[i]='*') and morse[i+1]==' ')
      morse.w_space;
    if(m mod 4==0)
    {
      morse.c_space;
      m=0;
    }
  }
   if(morse[i]=='.' )
     morse.dot;
   else if(morse[i]=='-')
     morse.dash;

}
