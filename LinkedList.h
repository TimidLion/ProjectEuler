template <class T>

class ListNode
{
	private:
		T data;
		ListNode* next;
	public:
		ListNode(T val,ListNode p = NULL);
		{
			data = val;
			next = p;
		}
}	

class LinkedList
{
	private:
		T* head;
		T* next;
	public:
		LinkedList(T val)
		{
			if head 
			ListNode(val,p);
			head = new T[1];
		}
		~LinkedList();
		LinkedList( LinkedList other )
		{

		}
		LinkedList operator=( LinkedList obj )
		{
			
		}
		T operator[](int index)
		{
			return getVal(index+1);
		}
		T getVal(int index)
		{
			if(head == NULL || index <= 0 )
				cout << "Out of index";
			else
			{
				T value;
				ListNode curNode = head;
				for(int i = 1; i <= index;i++)
				{
					value = currNode->data;
				}
				return value;
			}
		}
		void setVal(int index,T val)
		{
			if(head = 
		}
}
