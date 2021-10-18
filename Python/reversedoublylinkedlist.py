# Python3 implementation to reverse a doubly
# linked list using recursion
import math

# a node of the doubly linked list
class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

# function to get a new node
def getNode(data):
	
	# allocate space
	new_node = Node(data)
	new_node.data = data
	new_node.next = new_node.prev = None
	return new_node

# function to insert a node at the beginning
# of the Doubly Linked List
def push(head_ref, new_node):
	
	# since we are adding at the beginning,
	# prev is always None
	new_node.prev = None

	# link the old list off the new node
	new_node.next = head_ref

	# change prev of head node to new node
	if (head_ref != None):
		head_ref.prev = new_node

	# move the head to point to the new node
	head_ref = new_node
	return head_ref

# function to reverse a doubly linked list
def Reverse(node):
	
	# If empty list, return
	if not node:
		return None

	# Otherwise, swap the next and prev
	temp = node.next
	node.next = node.prev
	node.prev = temp

	# If the prev is now None, the list
	# has been fully reversed
	if not node.prev:
		return node

	# Otherwise, keep going
	return Reverse(node.prev)

# Function to print nodes in a given doubly
# linked list
def printList(head):
	while (head != None) :
		print(head.data, end = " ")
		head = head.next
	
# Driver Code
if __name__=='__main__':
	
	# Start with the empty list
	head = None

	# Create doubly linked: 10<.8<.4<.2 */
	head = push(head, getNode(2));
	head = push(head, getNode(4));
	head = push(head, getNode(8));
	head = push(head, getNode(10));
	print("Original list: ", end = "")
	printList(head)
	
	# Reverse doubly linked list
	head = Reverse(head)
	print("\nReversed list: ", end = "")
	printList(head)
	
# This code is contributed by Srathore
