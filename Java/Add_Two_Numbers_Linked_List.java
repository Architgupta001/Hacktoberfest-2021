/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
public class Add_Two_Numbers_Linked_List {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
    //Carry forward(while addition)
    int carry = 0;
     
    //Dummy node; we'll return its next
    ListNode p, dummy = new ListNode(0);
    p = dummy;
    
    //Terminating condition
    while (l1 != null || l2 != null || carry != 0) {
      
        //Adding carry
        if (l1 != null) {
            carry += l1.val;
            l1 = l1.next;
        }
        //Adding carry
        if (l2 != null) {
            carry += l2.val;
            l2 = l2.next;
        }
        //Forming a new node
        p.next = new ListNode(carry%10);
      
        //Dividing the carry by 10 to forward it
        carry /= 10;
        p = p.next;
    }
      
     //Returning the head of the result linked list
    return dummy.next;

    }
}
