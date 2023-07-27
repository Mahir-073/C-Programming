#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int count_ascii(const char *name)
{
    int i = 0, sum = 0;
    while (name[i] != '\0')
    {
        sum += name[i];
        i++;
    }
    return sum;
}

void *count_ascii_wrapper(void *arg)
{
    const char *name = (const char *)arg;
    int *result = (int *)malloc(sizeof(int));
    *result = count_ascii(name);
    return result;
}

int main()
{
    pthread_t t1, t2, t3;
    char *name1 = "Mahir";
    char *name2 = "Mahir";
    char *name3 = "Mahir";
    int *result1, *result2, *result3;

    pthread_create(&t1, NULL, count_ascii_wrapper, (void *)name1);
    pthread_create(&t2, NULL, count_ascii_wrapper, (void *)name2);
    pthread_create(&t3, NULL, count_ascii_wrapper, (void *)name3);

    pthread_join(t1, (void **)&result1);
    pthread_join(t2, (void **)&result2);
    pthread_join(t3, (void **)&result3);

    if (*result1 == *result2 && *result1 == *result3)
    {
        printf("Youreka\n");
    }
    else if (*result1 == *result2 || *result1 == *result3 || *result2 == *result3)
    {
        printf("Miracle\n");
    }
    else
    {
        printf("Hasta la vista\n");
    }

    return 0;
}

