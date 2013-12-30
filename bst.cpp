#include "bst.h"

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Name      : node
Writer(s) : Jeffrey Allen
Purpose   : constructs a node
Incoming  : n/a
Outgoing  : n/a
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
node::node() {

	key = NULL;
	left = NULL;
	right = NULL;

}

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Name      : node
Writer(s) : Jeffrey Allen
Purpose   : creates a node with a value
Incoming  : int
Outgoing  : n/a
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
node::node(int num) {

	key = num;
	left = NULL;
	right = NULL;

}

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Name      : validate
Writer(s) : Jeffrey Allen
Purpose   : Validates form input
Income    : int, left and right node pointer
Outgoing  : n/a
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
node::node(int num, node* lPointer, node* rPointer) {

	key = num;
	left = lPointer;
	right = rPointer;

}

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Name      : getData
Writer(s) : Jeffrey Allen
Purpose   : Get value of node
Income    : n/a
Outgoing  : int
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
int node::getData() {return key;}