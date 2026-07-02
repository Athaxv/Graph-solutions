/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} list1
     * @param {ListNode} list2
     * @return {ListNode}
     */
    mergeTwoLists(list1, list2) {
        var arr = []
        var temp1 = list1
        var temp2 = list2
        while(temp1 != null){
            arr.push(temp1.val);
            temp1 = temp1.next;
        }
        while(temp2 != null){
            arr.push(temp2.val)
            temp2 = temp2.next;
        }
        arr.sort((a, b) => a - b)
        const ans = new ListNode(0)
        let curr = ans
        for(let i = 0; i < arr.length; i++){
            curr.next = new ListNode(arr[i]);
            curr = curr.next
        }
        return ans.next
    }
}
