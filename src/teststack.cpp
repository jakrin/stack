#include "libstack/stack.h"
#include <iostream>

#define DBG(x) x
//#define DBG(x)

int test_create() {
	//create stack
    stack s;
    create(s);
    //check if n=0 (i.e. the stack is empty) and the stack pointer is valid
    if (s.n == 0 && s.s != 0) return 0;
    else return 1;
}

int test_del (stack &s) {
    //delete stack 's'
    del(s);
    //check if the stack is empty and the stack pointer isn't valid
    if (s.n == 0 && s.s == NULL) return 0;
    else return 1;
}

int test_push(stack &s, int x) {
    int k = s.n;
	//push element 'x' into the stack 's'
    push(s, x);
    DBG(std::cout << s.n <<  s.s[0] << std::endl;)
    //check if we pushed 'x' into the stack and increased 'n' by 1
    if (s.s[s.n - 1] == x && k == s.n - 1) return 0;
    else return 1;
}

int test_pop(stack &s) {
    int k = s.n;
    //check that the function pop(stack) reterned the latest element in the stack, decreased 'n' by 1  
    int t;
    int l = s.s[s.n - 1];
    if (pop(s, t) != 0) return 1;
    if (l == t && k == s.n + 1) return 0;
    else return 1;
    
}


int test_push_pop(int k) {
    stack s;
    create(s);
    for (int i = 0; i < k; i++ ) {
        push(s, (i + 1) * 2);
        DBG(std::cout << s.s[s.n-1]  << std::endl;)
    }
    
    DBG(std::cout << "stack:" << std::endl;)
    int t;
    for (int j = stack_size - 1; j >= 0; j--) {
        pop(s, t);
        DBG(std::cout << t << std::endl;)
        if (t != (j + 1) * 2) return 1;
    }
}
int main() {
    using namespace std;
    int c = 0;
    stack s, st;
    create(s);
    create(st);
    c += test_create();
    std::cout << "create stack test: " << ((c == 0) ? "PASSED" : "FAILED") << std::endl; 
    c += test_push(s, 7);
    std::cout << "push stack test: " << ((c == 0) ? "PASSED" : "FAILED") << std::endl; 
    push(st,7);
    c += test_pop(st); 
    std::cout << "pop stack test: " << ((c == 0) ? "PASSED" : "FAILED") << std::endl; 
    c += test_del(st);
    std::cout << "del stack test: " << ((c == 0) ? "PASSED" : "FAILED") << std::endl; 
    c += test_push_pop(20);
    std::cout << "batch push/pop stack test:" << ((c == 0) ? "PASSED" : "FAILED") << std::endl;
    return c;
}
