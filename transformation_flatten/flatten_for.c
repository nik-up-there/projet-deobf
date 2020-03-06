/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _IO_FILE ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern unsigned int strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int raise(int sig ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int scanf(char const   *format  , ...) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void exit(int status ) ;
extern void signal(int sig , void *func ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
typedef struct _IO_FILE FILE;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern double ceil(double x ) ;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern long clock(void) ;
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long time(long *tloc ) ;
extern int rand() ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double sqrt(double x ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern void *malloc(unsigned int size ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int atoi(char const   *s ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
void megaInit(void) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) 
{ 
  int i ;
  long long fact ;
  int number ;
  int _BARRIER_0 ;
  unsigned long _1_main_next ;

  {
  megaInit();
  _global_argc = _formal_argc;
  _global_argv = _formal_argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  {
  _1_main_next = 5UL;
  }
  while (1) {
    switch (_1_main_next) {
    case 3: ;
    return (0);
    break;
    case 6: 
    printf((char const   */* __restrict  */)"Factorial of %d is: %ld\n", number, fact);
    {
    _1_main_next = 3UL;
    }
    break;
    case 5: 
    i = 1;
    fact = 1LL;
    number = 3;
    i = 1;
    {
    _1_main_next = 2UL;
    }
    break;
    case 0: 
    fact *= (long long )i;
    i ++;
    {
    _1_main_next = 2UL;
    }
    break;
    case 2: ;
    if (i <= number) {
      {
      _1_main_next = 0UL;
      }
    } else {
      {
      _1_main_next = 6UL;
      }
    }
    break;
    }
  }
}
}
void megaInit(void) 
{ 


  {

}
}