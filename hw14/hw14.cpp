#include <iostream>
#include "list.h"

using namespace std;

int main()
{
  List<int> ints;
  List<int> ints2;
  List<double> doubles;
  List<double> doubles2;
  node<int> *i;
  node<double> *d;

  ints.addNode(i,1);
  ints.addNode(i,2);
  ints.addNode(i,3);
  ints.addNode(i,4);
  ints.addNode(i,5);

  doubles.addNode(d,6.5);
  doubles.addNode(d,7.5);
  doubles.addNode(d,8.5);
  doubles.addNode(d,9.5);
  doubles.addNode(d,10.5);

  ints2 = ints;
  doubles2 = doubles;

  ints.printForward();
  cout << endl;
  doubles.printForward();
  cout << endl;
  cout << "Copy example" << endl;
  ints2.printForward();
  cout << endl;
  cout << "Reversed" << endl;
  ints.printBackward();
  cout << endl;
  doubles.printBackward();
  cout << endl;


  cout << "Deleted node 3" << endl;
  ints.deleteAt(ints.getHead(),3);
  doubles.deleteAt(doubles.getHead(),3);
  ints.printForward();
  cout << endl;
  doubles.printForward();

  cout << endl;
  cout << "Added node" << endl;
  ints.addNode(i,3);
  doubles.addNode(d,8.4);
  ints.printForward();
  cout << endl;
  doubles.printForward();

}
