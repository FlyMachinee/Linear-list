#include "Stack.hpp"

// 构造函数
template <typename Elem>
Stack<Elem>::Stack()
{
    arr = new SeqList<Elem>;
}

// 析构函数
template <typename Elem>
Stack<Elem>::~Stack()
{
    if (arr)
        delete arr;
}

// 入栈
template <typename Elem>
void Stack<Elem>::push(const Elem& obj)
{
    arr->push_back(obj);
}

// 出栈
template <typename Elem>
void Stack<Elem>::pop()
{
    arr->remove(arr->prior(arr->end()));
}

// 栈顶元素
template <typename Elem>
const Elem& Stack<Elem>::top() const
{
    return arr->at(arr->prior(arr->end()));
}

// 是否为空
template <typename Elem>
bool Stack<Elem>::empty() const
{
    return arr->empty();
}

// 栈大小
template <typename Elem>
int Stack<Elem>::size() const
{
    return arr->length();
}

// 遍历元素输出，以separator为分隔符
template <typename Elem>
void Stack<Elem>::traverse(char separator) const
{
    arr->traverse(separator);
}