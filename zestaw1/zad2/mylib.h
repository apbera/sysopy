#ifndef MYLIB_H
#define MYLIB_H

struct wrapped_array {
    int size;
    char **array;
};

typedef struct wrapped_array wrapped_array;

struct wrapped_array* create(int array_size);

int add_block_at_index(struct wrapped_array* arr, char* file, int index);

int delete_block_at_index(struct wrapped_array* arr,int index);

char* find_file(char* dir, char* file, char* name_file_temp);

char* load_file(char* path);

void free_memory(struct wrapped_array* arr);


#endif //MYLIB_H