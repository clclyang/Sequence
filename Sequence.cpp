#include "Sequence.h"

int Sequence::length()
{
  sd=str.size();
  return sd;
}
int Sequence::numberOf(char base)
{
  int no=0;
  switch(base)
  {
    case 'A':
    for(int i=0;i<sd;i++)
    {
       if(str[i]=='A')no++;
    }break;
    case 'C':
    for(int i=0;i<sd;i++)
    {
       if(str[i]=='C')no++;
    }break;
    case 'G':
    for(int i=0;i<sd;i++)
    {
       if(str[i]=='G')no++;
    }break;
    case 'T':
    for(int i=0;i<sd;i++)
    {
       if(str[i]=='T')no++;
    }break;
  }
   return no;
}
string Sequence::longestConsecutive()
{
 string str1;
 string str2;
 for(int i=0;i<sd;i++)
 {
   if(str[i]==str[i+1])str2+=str[i+1];
   else
   {
       int a=str1.size();
       int b=str2.size();
       if(b>a)str1=str2;
       str2.clear();
   }
}
if(str1[0]=='A')str1+='A';
if(str1[0]=='C')str1+='C';
if(str1[0]=='G')str1+='G';
if(str1[0]=='T')str1+='T';
  return str1;
}
string Sequence::longestRepeated()
{
  string str1,str2;
  int y=10;
  int e=0;
  str1=found(e,y,str1);
  while(y<sd)
  {
    int s=str1.size();
    y++;e++;
    str2=found(e,y,str2);
    int p=str2.size();
    if(p>s)
    {
       str1=str2;str2.clear();
    }
  }
  return str1;
}
Sequence::~Sequence()
{
  
}
string Sequence::found(int a,int b,string stre)
{
  if(str[a]==str[b])
  { 
    stre+=str[a];
    a++;b++;found(a,b,stre);
  }
  else
  {
    return stre;
  }
}
