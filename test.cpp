/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "test.h"
using namespace std;
void TestSuite::runTests(){
  testNodeCtor();
  testNodeSetValue();
  testNodeSetNext();
  testInitSize();
  testIsEmpty();
  testAddBack();
  testAddFront();
  testSearch();
  testRemoveBack();
  testRemoveBackSize();
  testRemoveFront();
}

void TestSuite::testNodeCtor(){
  Node<int>* testNode = new Node<int>(3);
  if (testNode->getValue() == 3 && testNode->getNext() == nullptr){
      cout << "1. Node is constructed with value and null next: test passed.\n";
  }
  else{
    cout << "6. Node added to back of list: test FAILED.\n";
  }
}
void TestSuite::testNodeSetValue(){
  Node<int>* testNode = new Node<int>(3);
  testNode->setValue(5);
  if(testNode->getValue() == 5){
    cout << "2. Node getValue returns value passed to setValue: test passed.\n";
  }
  else{
    cout << "2. Node getValue returns value passed to setValue: test FAILED.\n";
  }

}
void TestSuite::testNodeSetNext(){
  Node<int>* testNodeHead = new Node<int>(1);
  Node<int>* testNodeTail = new Node<int>(2);
  testNodeHead->setNext(testNodeTail);
  if (testNodeHead->getNext() == testNodeTail){
    cout << "3. Node getNext returns node passed to setNext: test passed.\n";
  }
  else{
    cout << "3. Node getNext returns node passed to setNext: test FAILED.\n";
  }

}
void TestSuite::testInitSize(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  if (testList->size() == 0){
    cout << "4. List initial size is zero: test passed.\n";
  }
  else{
    cout << "4. List initial size is zero: test FAILED.\n";
  }
}
void TestSuite::testIsEmpty(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  if (testList->isEmpty()){
    cout << "5. isEmpty returns true on new list: test passed.\n";
  }
  else{
    cout << "5. isEmpty returns true on new list: test FAILED.\n";
  }
}
void TestSuite::testAddBack(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addBack(1);
  testList->addBack(2);
  Node<int> node = testList->toVector().at(0);
  Node<int> node2 = testList->toVector().at(1);
  if (node.getValue() == 1 && node2.getValue() == 2){
    cout << "6. Node is added to back of list: test passed.\n";
  }
  else{
    cout << "6. Node is added to back of list: test FAILED.\n";
  }
}
void TestSuite::testAddFront(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(1);
  testList->addFront(2); //list should be 2, 1
  Node<int> node = testList->toVector().at(0); // should be 2
  Node<int> node2 = testList->toVector().at(1); // should be 1
  if (node.getValue() == 2 && node2.getValue() == 1){
    cout << "7. Node is added to front of list: test passed.\n";
  }
  else{
    cout << "7. Node is added to front of list: test FAILED.\n";
  }
}
void TestSuite::testSearch(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(3);
  testList->addBack(1);
  testList->addFront(2); //list should be 2,3,1
  if(testList->search(3) && testList->search(2) && testList->search(1)){
    cout << "8. Search finds all inserted nodes: test passed.\n";
  }
  else{
    cout << "8. Search finds all inserted nodes: test FAILED.\n";
  }
}

void TestSuite::testRemoveBack(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(3);
  testList->addBack(1);
  testList->addFront(2); //list should be 2,3,1
  testList->removeBack();
  if (!testList->search(1)){
    cout << "9. RemoveBack removes node: test passed.\n";
  }
  else{
    cout << "9. RemoveBack removes node: test FAILED.\n";
  }
}
void TestSuite::testRemoveBackSize(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(3);
  testList->addBack(1);
  testList->addFront(2); //list should be 2,3,1
  testList->removeBack();
  if (testList->size() == 2){
    cout << "10. RemoveBack decrements size: test passed.\n";
  }
  else{
    cout << "10. RemoveBack decrements size: test FAILED.\n";
  }
}
void TestSuite::testRemoveFront(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(3);
  testList->addBack(1);
  testList->addFront(2); //list should be 2,3,1
  testList->removeFront();
  if (!testList->search(2)){
    cout << "11. RemoveFront removes node: test passed.\n";
  }
  else{
    cout << "11. RemoveFront removes node: test FAILED.\n";
  }
}
void TestSuite::testRemoveFrontSize(){
  LinkedListOfInts* testList = new LinkedListOfInts();
  testList->addFront(3);
  testList->addBack(1);
  testList->addFront(2); //list should be 2,3,1
  testList->removeFront();
  if (testList->size() == 2){
    cout << "12. RemoveBack decrements size: test passed.\n";
  }
  else{
    cout << "12. RemoveBack decrements size: test FAILED.\n";
  }
}
