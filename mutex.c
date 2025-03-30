#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<errno.h>
#include<assert.h>
#include<unistd.h>
int arr[]={1,2,3,4,5};
pthread_mutex_t mutx;
static void* thread_fn_add(void *arg){
     int i;
     int sum;
     int arr_size=sizeof(arr)/sizeof(arr[0]);
     do{
       sum=0;
       i=0;
     pthread_mutex_lock(&mutx);
         while(i<arr_size){
//         pthread_mutex_lock(&mutx);
            sum+=arr[i];  
            i++;
                      }
        printf("Sum= %d\n",sum);
    pthread_mutex_unlock(&mutx);
      }
      while(1);
                                  }


static void* thread_fn_swap(void *arg)
{
  int temp;
  int arr_size=sizeof(arr)/sizeof(arr[0]);
  do{
    pthread_mutex_lock(&mutx); 
    temp=arr[0];
    arr[0]=arr[arr_size-1];
    arr[arr_size-1]=temp;
    pthread_mutex_unlock(&mutx); 
   }while(1);
}

void print_sum(){
pthread_t pth;
int rc=pthread_create(&pth,NULL,thread_fn_add,NULL);
 if(rc!=0){
   printf("Error occured thread could not be created,errno=%d\n",rc);
   exit(0);
         }
}

void swap_num(){
pthread_t pth;
//pthread_mutex_init(&mutx,0);
int rc=pthread_create(&pth,NULL,thread_fn_swap,NULL);
 if(rc!=0){
   printf("Error occured thread could not be created,errno=%d\n",rc);
   exit(0);
         }
}


int main(){
   pthread_mutex_init(&mutx,0);
   print_sum();
   swap_num();

   pthread_exit(0);
return 0;
}