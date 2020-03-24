/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _IO_FILE ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int getpagesize() ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned int strlen(char const   *s ) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int scanf(char const   *format  , ...) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int raise(int sig ) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern void abort() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
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
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern long clock(void) ;
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long time(long *tloc ) ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int rand() ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern void *malloc(unsigned int size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int atoi(char const   *s ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
void megaInit(void) ;
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int _BARRIER_0 ;
  int _1__BARRIER_1 ;
  int _1__BARRIER_2 ;
  unsigned char *argc_origPtr7 ;
  int argc_copy8 ;
  unsigned char *argc_copyPtr9 ;
  int size_iter10 ;
  int charCopy11 ;
  int copy_iter12 ;
  char **arrayOfStringCopy_newArray13 ;
  int arrayOfStringCopy_iter14 ;
  char **arrayOfStringCopy_newArrayElmtPtr15 ;
  char *stringCopy_origPtr16 ;
  int stringCopy_strLen17 ;
  int exp_orig18 ;
  unsigned char *exp_orig18_origPtr19 ;
  int exp_orig18_copy20 ;
  unsigned char *exp_orig18_copyPtr21 ;
  int size_iter22 ;
  int charCopy23 ;
  int copy_iter24 ;
  char *stringCopy_orig25 ;
  char *stringCopy_copyPtr26 ;
  int charCopy27 ;
  int copy_iter28 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1__BARRIER_1 = 1;
  _1__BARRIER_2 = 1;
  arrayOfStringCopy_newArray13 = (char **)malloc(argc * 8);
  arrayOfStringCopy_newArrayElmtPtr15 = arrayOfStringCopy_newArray13;
  arrayOfStringCopy_iter14 = 0;
  while (arrayOfStringCopy_iter14 < argc) {
    stringCopy_strLen17 = (int )strlen(*(argv + arrayOfStringCopy_iter14));
    exp_orig18 = stringCopy_strLen17;
    exp_orig18_origPtr19 = (unsigned char *)(& exp_orig18);
    exp_orig18_copyPtr21 = (unsigned char *)(& exp_orig18_copy20);
    size_iter22 = 0;
    while (size_iter22 < 4) {
      charCopy23 = 0;
      copy_iter24 = 0;
      while (copy_iter24 < *exp_orig18_origPtr19) {
        charCopy23 ++;
        copy_iter24 ++;
      }
      *exp_orig18_copyPtr21 = (unsigned char )charCopy23;
      exp_orig18_origPtr19 ++;
      exp_orig18_copyPtr21 ++;
      size_iter22 ++;
    }
    stringCopy_orig25 = (char *)malloc(exp_orig18_copy20 + 1);
    stringCopy_origPtr16 = (char *)*(argv + arrayOfStringCopy_iter14);
    stringCopy_copyPtr26 = stringCopy_orig25;
    while (*stringCopy_origPtr16 != 0) {
      charCopy27 = 0;
      copy_iter28 = 0;
      while (copy_iter28 < *stringCopy_origPtr16) {
        charCopy27 ++;
        copy_iter28 ++;
      }
      *stringCopy_copyPtr26 = (unsigned char )charCopy27;
      stringCopy_origPtr16 ++;
      stringCopy_copyPtr26 ++;
    }
    *stringCopy_copyPtr26 = 0;
    *arrayOfStringCopy_newArrayElmtPtr15 = stringCopy_orig25;
    arrayOfStringCopy_newArrayElmtPtr15 ++;
    arrayOfStringCopy_iter14 ++;
  }
  argc_origPtr7 = (unsigned char *)(& argc);
  argc_copyPtr9 = (unsigned char *)(& argc_copy8);
  size_iter10 = 0;
  while (size_iter10 < 4) {
    charCopy11 = 0;
    copy_iter12 = 0;
    while (copy_iter12 < *argc_origPtr7) {
      charCopy11 ++;
      copy_iter12 ++;
    }
    *argc_copyPtr9 = (unsigned char )charCopy11;
    argc_origPtr7 ++;
    argc_copyPtr9 ++;
    size_iter10 ++;
  }
  printf((char const   */* __restrict  */)"%d\n", argc_copy8);
  return (0);
}
}