# CONVERT-IT-PROBLEM-

Yunus Ali is working with binary trees. But he is not loving the order of the tree, he wants to optimize it so that he can do some operation easily. For this reason, he is converting the binary tree into something like that when taking out from the tree the value will be sorted and also he can put new values into that tree.

You will be given an initial binary tree in level order. After that you need to do Q operations on it. Any operation is of two types

    Insert a value in that tree.
    Delete the maximum value from that tree and print it.

It is guranteed that, there will be minimum one type 2 operation.

Input Format

    You will be given the initial binary tree in level order, if the value is -1 that means there is no node.
    Next line will contain Q, the number of operations
    Next Q lines will contain the operations. The type will be either 1 or 2.

Constraints

    V (0 <= V <= 100), value of a node.
    0 < Q <= 100

Output Format

    Output for type 2 operation

Sample Input 

0
1 2
3 -1 -1 4
-1 -1 -1 -1
4
2
1 10
1 8
2

Sample Output 

4
10

