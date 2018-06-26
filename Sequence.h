#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<fstream>
#include<string>
#include<iostream>
using namespace std;

class Sequence
{
   public:
   Sequence(string filename)
   :fl(filename)
{
  ifstream input(fl.c_str());
  while(!input.eof())
  getline(input,strm),str+=strm;
  input.close();
}
  string found(int a,int b,string stre);
  int length();
  int numberOf(char base);
  string longestConsecutive();
  string longestRepeated();
  ~Sequence();
  private:
  string fl;
  int sd;
  string strm;
  string str;
};

#endif
