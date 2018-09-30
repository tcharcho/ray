#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// int shared = -1;

// void* process(void* rank){
//    long my_rank = (long) rank;
//    printf("This is thread %ld\n", my_rank);

//    if (my_rank%5 == 0) shared = 0;

//    sleep(5);

//    return NULL;
// }

// int main(){
//    long       thread;
//    pthread_t* thread_handles;
//    int threads = 10;

// 	thread_handles = malloc (threads*sizeof(pthread_t)); 

//    for (thread = 0; thread < threads; thread++)  
// 	pthread_create(&thread_handles[thread], NULL,
// 		process, (void*) thread);  


//    // while(shared == -1);
//    // printf("HELLO\n");



//    for (thread = 0; thread < threads; thread++) {
//       pthread_join(thread_handles[thread], NULL); 
//       printf("Thread %ld done\n", thread);
//    }

//    free(thread_handles);


//     return 0;
// }

typedef struct {
    int rank;
    int arg1;
    int arg2;
} arg_struct;

void* print_the_arguments(void* arguments) {
    arg_struct* args = (arg_struct*)arguments;
    printf("This is thread %ld\n", (long)args->rank);

    return NULL;
}

int main() {
   // int threads = 3;
   // long thread;
   // pthread_t* thread_handles;

	// thread_handles = malloc(threads*sizeof(pthread_t)); 

   // for (thread = 0; thread < threads; thread++){
   //    arg_struct arguments;
   //    arguments.rank = thread;
   //    arguments.arg1 = thread+1;
   //    arguments.arg2 = thread+2;
   //    // printf("--> %ld\n", thread);
   //    long rank = thread*2;
   //    pthread_create(&thread_handles[thread], NULL, print_the_arguments, (void*)&arguments); 
   //    // sleep(1);
   // }

   // for (thread = 0; thread < threads; thread++) 
   //    pthread_join(thread_handles[thread], NULL); 


   // free(thread_handles);

   int j = 2;

   for (int x = 0; x < 1; x++){
      int j = 5;
      printf("%d\n", j);
   }
}
