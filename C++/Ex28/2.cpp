#include<vector>
#include<iostream>

template<class T>
class Stack
{
    private:
         std::vector<T> stack;
    public:
        Stack(){};
        void add(T a);
        T remove();
};

template<class T>
void Stack<T>::add(T a)
{
    stack.resize(stack.size() + 1);
    stack[stack.size() - 1] = a;
}

template<class T>
T Stack<T>::remove()
{
    T retVal = stack[stack.size() - 1];
    stack.resize(stack.size() - 1);
    return retVal;
}

int main()
{
    Stack<int> s;

    s.add(25);
    int a = s.remove();

    std::cout << a << std::endl;
}
