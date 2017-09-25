// LinkedList.cpp
// Kip DeCastro
// tom bailey   0745  5 oct 2010
// Definition of methods for the List class.

#include "LinkedList.h"

#include <utility>


List::List()
	: first_(NULL)
{
}


List::List(const List & other)
	: first_(clone(other.first_))
{
}


List::~List()
{
	while (!empty())
	{
		removeFirst();
	}
}


const List & List::operator=(const List & other)
{
	// check for list = list
	if (&other != this)
	{
		// clear the current contents of this List
		this -> ~List();
		// and get a copy of other
		first_ = clone(other.first_);
	}

	return *this;
}


bool List::empty() const
{
	return first_ == NULL;
}

int List::getSize(){
	//return List.size();
	int c = 0;
	if(!empty()){
		c++;
		Node * ptr = first_->next_;
		while(ptr != NULL){
			c++;
			ptr = ptr->next_;
		}
	}
	return c;
}

double List::sum(){
	double sum = 0;
	if(!empty()){
		Node * ptr = first_;
		sum = sum + ptr->entry_;
		ptr = ptr->next_;
		while(ptr != NULL){
			sum = sum + ptr->entry_;
			ptr = ptr->next_;
		}
	}
	return sum;
}


void List::insertAsFirst(double x)
{
	first_ = new Node(x, first_);	// If there's nothing in the list, add to
									// the beginning.
}

void List::insertAsLast(double x){
	// After many hours of banging my head on the keyboard, I had to resort to
	// stackexchange. I read this page:
	// https://codereview.stackexchange.com/questions/136077/insert-a-node-at-the-tail-of-a-linked-list
	// and had a solid enough idea of what I needed to do.

	Node * last = new Node(x, first_);	// Creates a node to hold the data for
										// the last entry.
	last->entry_ = x;					// Assigns the double passed by the 
										// function to the last entry.
	last->next_ = NULL;	// Creates a null value in the pointer past last.
						// Otherwise, the code will execude forever!
	if(empty()){
		insertAsFirst(x);
	} else {
		Node * temp = new Node(x, first_);	// Temp node to find the last node
											// in the list.
		while(temp->next_ != NULL){		// Cycles through until it finds the 
										// last node in the list.
			temp = temp->next_;
		}
		temp->next_ = last;				// Assigns the node following the
										// last node created to the value passed
										// through the method.
    }
}


double List::removeFirst()
{
	double item = first_->entry_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	delete tempPtr;
	return item;
}


void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		// The first entry is printed separately because no comma
		// is needed.
		outfile << first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			outfile << ", " << ptr->entry_;
			ptr = ptr->next_;
		}
	}
	outfile << " ]";
}


// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
	if (ptr == NULL)
	{
		return NULL;
	}
	Node * first = new Node(ptr->entry_);
	Node * last = first;
	ptr = ptr->next_;
	while (ptr != NULL)
	{
		last->next_ = new Node(ptr->entry_);
		last = last->next_;
		ptr = ptr->next_;
	}
	return first;
}


//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}


