class Solution(object):
    def addTwoNumbers(self, l1, l2):
        num1 = 0
        k = 0
        num2 = 0
        while (l1):
            num1 += pow(10, k) * l1.val
            k += 1
            l1 = l1.next
        k = 0
        while (l2):
            num2 += pow(10, k) * l2.val
            k += 1
            l2 = l2.next
        num = str(num1 + num2)
        l = ListNode(num[0])
        for i in range(1, len(num)):
            l = ListNode(num[i], l)

        return l
