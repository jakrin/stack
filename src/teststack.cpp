#include <libstack/stack.h>

int test_create() {
	//create stack
    stack s = create();
    //check if n=0 (i.e. the stack is empty) and the stack pointer is valid
    if (s.n == 0 && s.s != NULL) return 0;
    else return 1;
}

int test_del (stack s) {
    //delete stack 's'
    del(s);
    //check if the stack is empty and the stack pointer isn't valid
    if (s.n == 0 && s.s == NULL) return 0;
    else return 1;
}

int test_push(stack s; int x){
    int k = s.n;
	//push element 'x' into the stack 's'
    push(s; x);
    //check if the stack is complete
    if (s.n > 10) {
    	std::cout << "You have moved beyoned the stack" << std::endl(); 
	break;
	}
	//check if we pushed 'x' into the stack and increased 'n' by 1
    if (s.s[s.n - 1] == x && k == s.n - 1 ) return 0;
    else return 1;
}

int test_pop(stack s) {
    int k = s.n;
    //check that the function pop(stack) reterned the latest element in the stack, decreased 'n' by 1, and that the lower limit of the stack is correct  
    if (s.s[s.n - 1] == pop(s) && k == s.n + 1 && s.n >= 0) return 0;
    else return 1;
    
}

i
int main() {
    int c = 0;
    c += test_create();
    std::cout << "create stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_push(create(); 7);
    std::cout << "push stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_pop(push(create();7)); 
    std::cout << "pop stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_del();
    std::cout << "del stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    if (c == 0) return 0;
    else return 1;
}
