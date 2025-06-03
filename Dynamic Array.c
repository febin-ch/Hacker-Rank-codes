#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;
int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    total_number_of_books = (int *)calloc(total_number_of_shelves, sizeof(int));
    total_number_of_pages = (int **)malloc(total_number_of_shelves * sizeof(int *));
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;  //ith ahnn mainnn stepp
    }
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            int book_count = total_number_of_books[x];
            int *new_array = (int *)realloc(total_number_of_pages[x], (book_count + 1) * sizeof(int));
            if (new_array == NULL) {
                fprintf(stderr, "Memory allocation failed\n");
                return 1;
            }
            total_number_of_pages[x] = new_array;
            total_number_of_pages[x][book_count] = y;
            total_number_of_books[x]++;
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}
