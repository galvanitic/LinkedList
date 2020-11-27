//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv){
  string line;
  ifstream stuff1("/Users/rgalvan/Documents/austincc/Data Struct and Algo/code/Lab3/stuff1.txt");
  LinkedList  listOfStuff;
  if (stuff1.is_open()){
    cout  <<  ">> Reading first file... \n";
    int count = 1;
    while ( getline(stuff1,line) )
    {
      Node newLine;
      newLine.setLine(line);
      listOfStuff.insert(count, newLine);
      count++;
    }
    stuff1.close();
  }else{
    cout << "Unable to open file";
  }
  listOfStuff.displayList();
  cout << ">> Now removing duplicates... \n";
  listOfStuff.removeDuplicates();
  cout << ">> Duplicates were found and destroyed!\n";
  cout << ">> Here's your list now:\n";
  listOfStuff.displayList();
  cout << "//  -------------------";
  cout << endl << endl;

//  -------------------
  string line2;
  ifstream stuff2("/Users/rgalvan/Documents/austincc/Data Struct and Algo/code/Lab3/stuff2.txt");
  LinkedList  listOfStuff2;
  if (stuff2.is_open()){
    cout  <<  ">> Reading second file... \n";
    int count = 1;
    while ( getline(stuff2,line2) )
    {
      Node newLine;
      newLine.setLine(line2);
      listOfStuff2.insert(count, newLine);
      count++;
    }
    stuff2.close();
  }else{
    cout << "Unable to open file 2";
  }
  listOfStuff2.displayList();
  cout << ">> Now removing duplicates... \n";
  listOfStuff2.removeDuplicates();
  cout << ">> Duplicates were found and destroyed!\n";
  cout << ">> Here's your second list now:\n";
  listOfStuff2.displayList();
  cout << "//  -------------------";
  cout << endl << endl;

//  -------------------
  string line3;
  ifstream stuff3("/Users/rgalvan/Documents/austincc/Data Struct and Algo/code/Lab3/stuff3.txt");
  LinkedList  listOfStuff3;
  if (stuff3.is_open()){
    cout  <<  ">> Reading third file... \n";
    int count = 1;
    while ( getline(stuff3,line3) )
    {
      Node newLine;
      newLine.setLine(line3);
      listOfStuff3.insert(count, newLine);
      count++;
    }
    stuff3.close();
  }else{
    cout << "Unable to open file 3";
  }
  listOfStuff3.displayList();
  cout << ">> Now removing duplicates... \n";
  listOfStuff3.removeDuplicates();
  cout << ">> Duplicates were found and destroyed!\n";
  cout << ">> Here's your third list now:\n";
  listOfStuff3.displayList();
  cout << "//  -------------------";
  cout << endl << endl;
  return 0;
}