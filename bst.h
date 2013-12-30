/**************************************

Name    : Jeffrey Allen
Date    : December 2013
Purpose : This is a practice for C++ coding

**************************************/

#include <iostream>
using namespace std;

class node {

friend Bst;

	public:

		// Constructors
		node();
		node(int);
		node(int,node*,node*);

		// Data a node can contain
		node* left;
		node* right;
		int key;

	private:

		// Function only executable by node class
		int getData();

};

class Bst {

	private:

		node* root;
		node* cursor;
		void printInHelp(ostream&, node*);
		void printPreHelp(ostream&, node*);
		void printPostHelp(ostream&, node*);


	public:

		// BST Constructors
		Bst();
		Bst(const Bst&);
		~Bst();

		// BST actions
		void insert(int);
		void remove(int);
		void search(int);
		void testPrint();
		void atCursor();
		void goToBeginning();
		void goToEnd();
		void goToNext();
		void goToPrev();
		void clearList();
		void checkEmptyList();
		void printPre();
		void printPost();

};