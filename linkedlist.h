struct virus;
void printfunction(struct virus *j);
struct virus *mutate_virus(int percent, char *name);
void print_list(struct virus *node);
struct virus *insert_front(struct virus *current, int new_int, char *new_name);
struct virus *free_list(struct virus *free_virus);
struct virus *remove_node(struct virus *front, int data);
