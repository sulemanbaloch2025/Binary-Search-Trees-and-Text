#include <iostream>
#include "Bst.h"
#include <fstream>
using namespace std;
 
int main()
{
 BST tree;
ifstream read;
string input;
cout<<"enter the file to read from \n";
getline(cin,input);
read.open(input);
 
if (!read)
{
 cout<<"No file found \n";
 exit(1);
}
 
string word;
while (read>> word)
{
 
tree.insert(word);
}
 
read.close();

tree.print();
tree.total();
tree.distinct();

}
