/**
*	@author
*	@date
*	@brief A header file for templated Node class
*/

#ifndef TEST_H
#define TEST_H

class TestSuite
{
public:
  void runTests();
private:
  void testNodeCtor();
  void testNodeSetValue();
  void testNodeSetNext();
  void testInitSize();
  void testIsEmpty();
  void testSearch();
  void testAddBack();
  void testAddFront();
  void testRemoveBack();
  void testRemoveBackSize();
  void testRemoveFront();
  void testRemoveFrontSize();
};


#endif
