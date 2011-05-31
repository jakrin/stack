
extern int stack_size;

typedef struct {
	int *s;
    public:	int n;
} stack;

void create(stack &st);
void del(stack &st);
int push(stack &st, int x);
int pop(stack &st, int &t);
