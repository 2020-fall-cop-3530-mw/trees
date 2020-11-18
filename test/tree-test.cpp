#include "catch/catch.hpp"
#include "../node.hpp"
#include "../tree.hpp"

TEST_CASE ("Tree Insert test")
{
	Tree<int> t;
	t.Insert(2);

	CHECK(2 == t.GetRoot()->GetValue());

	t.Insert(12);
	t.Insert(8);
	t.Insert(27);

	Node<int>* root = t.GetRoot();
	CHECK(8 == root->GetRight()->GetLeft()->GetValue());
	CHECK(27 == root->GetRight()->GetRight()->GetValue());

	REQUIRE(nullptr != t.Search(8));
	CHECK(8 == t.Search(8)->GetValue());
	CHECK(nullptr == t.Search(721));

	CHECK("2 8 12 27 " == t.Print());
}

TEST_CASE ("Tree Delete test")
{
	Tree<int> t;

	t.Insert(5);
	t.Insert(7);
	t.Insert(6);
	t.Insert(8);
	t.Insert(9);
	t.Insert(7);
	t.Insert(2);
	t.Insert(4);
	t.Insert(4);
	t.Insert(3);
	t.Insert(3);
	t.Insert(1);
	t.Insert(0);
	/*
     *            5
     *           / \
     *          /   \
     *         /     \
     *        2       7
     *       / \     / \
     *      1   4   6   8
     *     /   / \     / \
     *    0   3   4   7   9
     *         \  
     *          3
	*/

	// delete some values and test that it worked
	// first make sure you can reliably find the predecessor
}
