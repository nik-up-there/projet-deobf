/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _IO_FILE ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern unsigned int strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int pthread_cond_signal(int *cond ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
extern int unlink(char const   *filename ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
void main(void) ;
void _2_stringEncoder(int n , char str[] ) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double ceil(double x ) ;
void MERGED(void *tigressRetVal , long long *factpointeur__0 , int i__1 , int whichBlock__5 ) ;
void encodeStrings_litStr0_i$nit(void) ;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
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
char encodeStrings_litStr0[26] ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int rand() ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern void *malloc(unsigned int size ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int atoi(char const   *s ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
void megaInit(void) ;
void MERGED(void *tigressRetVal , long long *factpointeur__0 , int i__1 , int whichBlock__5 ) 
{ 
  int i__2 ;
  long long fact__3 ;
  int number__4 ;

  {
  if (whichBlock__5 == 0) {
    *factpointeur__0 *= (long long )i__1;
    return;
  } else
  if (whichBlock__5 == 1) {
    _2_stringEncoder(0, encodeStrings_litStr0);
    printf((char const   */* __restrict  */)(encodeStrings_litStr0), i__1, *factpointeur__0);
    return;
  } else
  if (whichBlock__5 == 2) {
    i__2 = 1;
    fact__3 = 1LL;
    number__4 = 10;
    i__2 = 1;
    while (i__2 <= number__4) {
      MERGED(0, & fact__3, i__2, 0);
      i__2 ++;
    }
    MERGED(0, & fact__3, number__4, 1);
    {
    *((int *)tigressRetVal) = 0;
    return;
    }
  } else {

  }
}
}
void main(void) 
{ 


  {
  megaInit();
}
}
void megaInit(void) 
{ 


  {
  encodeStrings_litStr0_i$nit();
}
}
void _2_stringEncoder(int n , char str[] ) 
{ 
  int encodeStrings_i3 ;

  {
  encodeStrings_i3 = 0;
  switch (n) {
  case 0: 
  str[encodeStrings_i3] = 'F';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'a';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'c';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 't';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'o';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'r';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'i';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'a';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'l';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = ' ';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'o';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'f';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = ' ';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = '%';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'd';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = ' ';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'i';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 's';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = ':';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = ' ';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = '%';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'l';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'l';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = 'd';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = '\n';
  encodeStrings_i3 ++;
  str[encodeStrings_i3] = '\000';
  encodeStrings_i3 ++;
  break;
  }
}
}
void encodeStrings_litStr0_i$nit(void) 
{ 


  {

}
}
