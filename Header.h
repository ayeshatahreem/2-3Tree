#ifndef T_H
#define T_H

template <class T> class Two3; 
template <class T>
class Two3Node
{
	friend class Two3<T>;
private:
	Element <T> d1,d2;
	Two3Node *L,*M,*R;
};

template <class T>
class Two3
{
public:
	Two3(T max, Two3Node <T> *r=0):key(max), root(r){};
	bool insert (const Element <T> &);
	Two3Node<T> *Search (const Element <T> &);

private:
	Two3Node <T> *root;
	T key;
};

#endif

template <class T>
Two3Node <T>  *Two3<T> :: Search (const Element <T> & s)
{
	Two3Node <T> *parent;
	for (parent = root; parent; )
	{
		if(parent->compare(s))
		{
			if(parent = parent->L)
			break;
			else if(parent = parent->M)
			break;
			else if(parent = parent->R)
			break;
			else 
				return parent;
		}
	}
}

template <class T>
bool Two3<T> :: Insert (const Element <T> & i)
{
	//insert the element only when tree does not contain an element already with the same key
	Two3Node <T> *parent;
	Element <T> insert = i;
	if(insert.key >= key)
		return false; // invalid key
	if(!root)		// empty 2-3 tree
	{
		NewRoot(insert,0);
		return true;
	}
	if(!(parent = FindNode (x)))
	{
		InsertionError();
		return false;
	}
	for (Two3Node <T> *S = 0 ;      ; )
	{
		if(parent->d2.key == key)		// 2 node
		{
			parent -> PutIn (insert, S);
			return true;
		}
		else 
		{
			Two3Node <T> *oldS = s;
			s = new (Two3Node <T> );
			insert = Split (parent, insert, oldS , s);
			if (root == parent)
			{
				NewRoot(insert, s);
				return true;
			}
			else 
				parent = parent ->parent;
		}
	}
}

