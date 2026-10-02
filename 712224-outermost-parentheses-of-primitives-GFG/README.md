# [Outermost Parentheses of Primitives](https://www.geeksforgeeks.org/problems/outermost-parentheses/1)
## Easy
A valid parenthesis&nbsp;string is called primitive if it cannot be split into two non-empty valid parentheses strings.
Given a valid parentheses string s, remove the outermost parentheses from every primitive substring and return the resulting string.
Examples:
Input: s = "(()())(())"
Output: "()()()"
Explanation: The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Input: s = "()()"Output: ""Explanation: The input string is "()()", with primitive decomposition "()" + "()".After removing outer parentheses of each part, this is "" + "" = "".
Constraint:1 ≤ s.size() ≤ 105s[i] is either '(' or ')'s is a valid parentheses string.