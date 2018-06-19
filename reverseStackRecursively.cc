#include <iostream>
using namespace std;
//一个栈依次压入1,2,3,4,5那么从栈顶到栈底分别为5, 4,3,2,1。
//将这个栈转置后，从栈顶到栈底为1,2,3,4,5，也就是实现了栈中元素的逆序，
//请设计一个算法实现逆序栈的操作，但是只能用递归函数来实现，而不能用另外的数据结构。
//给定一个栈Stack以及栈的大小top,请返回逆序后的栈。
//
//用例:[1,2,3,4,5],5
//返回[5,4,3,2,1]

#include <vector>
#include <stdio.h>
class ReverseStack {
public:
    vector<int> reverseStackRecursively(vector<int> stack, int top) {
        if(top == 0)
        {
            return stack;
        }
        int val = stack[top - 1];
        stack = reverseStackRecursively(stack,--top);
        stack[stack.size() - top - 1] = val;
        return stack;
    }
};

//class ReverseStack {
//public:
//    vector<int> reverseStackRecursively(vector<int> stack, int top) {
//        if(stack.empty())
//        {
//            return stack;
//        }
//        int val = stack[top -1];
//        stack.pop_back();
//        stack = reverseStackRecursively(stack,--top);
//        stack.insert(stack.begin(),val);
//        return stack;
//    }
//};

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    ReverseStack s;
    s.reverseStackRecursively(v,5);
    int i = 0;
    for(; i < 5; ++i)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}

