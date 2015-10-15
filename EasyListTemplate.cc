/****************************************************
 * <your name>
 * <the date>
 * <the file name>
 *
 * <a simple, short program/class description>
 ****************************************************/

#include <iostream>
using namespace std;

const int MAX_SIZE = 30;

class List
{
	private:
		int end;		// the index of the last valid item in the list
		int curr;		// the index of the current item in the list
		int list[MAX_SIZE];	// the list

	public:
		// constructor
		// remember that an empty list has a "size" of -1 and its "position" is at -1
		List()
		{
		}

		// copy constructor
		// clones the list l and sets the last element as the current
		List(const List& l)
		{
		}

		// copy constructor
		// clones the list l and sets the last element as the current
		void operator=(const List& l)
		{
		}

		// navigates to the beginning of the list
		void First()
		{
		}

		// navigates to the end of the list
		// the end of the list is at the last valid item in the list
		// this should not be possible for an empty list (although maybe it doesn't matter?)
		void Last()
		{
		}

		// navigates to the specified element (0-index)
		// this should not be possible for an empty list
		// this should not be possible for invalid positions
		void SetPos(int pos)
		{
		}

		// navigates to the previous element
		// this should not be possible for an empty list
		// there should be no wrap-around
		void Prev()
		{
		}

		// navigates to the next element
		// this should not be possible for an empty list
		// there should be no wrap-around
		void Next()
		{
		}

		// returns the location of the current element (or -1)
		int GetPos()
		{
		}

		// returns the value of the current element (or -1)
		int GetValue()
		{
		}

		// returns the size of the list
		// size does not imply capacity
		int GetSize() const
		{
		}

		// inserts an item before the current element
		// the new element becomes the current
		// this should not be possible for a full list
		void InsertBefore(int data)
		{
		}

		// inserts an item after the current element
		// the new element becomes the current
		// this should not be possible for a full list
		void InsertAfter(int data)
		{
		}

		// removes the current element (collapsing the list)
		// this should not be possible for an empty list
		void Remove()
		{
		}

		// replaces the value of the current element with the specified value
		// this should not be possible for an empty list
		void Replace(int data)
		{
		}

		// returns if the list is empty
		bool IsEmpty() const
		{
		}

		// returns if the list is full
		bool IsFull()
		{
		}

		// returns the concatenation of two lists
		// l should not be modified
		// l should be concatenated to the end of *this
		// the returned list should not exceed MAX_SIZE elements
		// the last element of the new list is the current
		List operator+(const List& l) const
		{
		}

		// returns if two lists are equal (by value)
		bool operator==(const List& l) const
		{
		}

		// returns if two lists are not equal (by value)
		bool operator!=(const List& l) const
		{
		}

		// returns a string representation of the entire list (e.g., 1 2 3 4 5)
		// the string "NULL" should be returned for an empty list
		friend ostream& operator<<(ostream& out, const List &l)
		{
		}
};
