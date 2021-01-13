# LIBFH

FUNCTIONS IN :  

## <span style="color: peru">CHECKERS</color>

ft_isprint() :	returns 1 if the character is printable, otherway returns 0.  
ft_isascii() : returns 1 if the character is part of the ascii table, otherway returns 0.  
ft_isdigit() : returns 1 if the character is a digit, otherway returns 0.  
ft_isalpha() : returns 1 if the character is alphabetical, otherway returns 0.  
ft_isalnum() : returns 1 if the character is either alphabetical or digital, otherway returns 0.  

## <span style="color: peru">FILES

ft_putchar_fd(char c, int fd) : print a character via a given file descriptor.  
ft_putstr_fd(char *s, int fd) : print a string via a given file descriptor.  
ft_putendl_fd(char *s, int fd) : print a string followed by a \n via a file descriptor.  
ft_putnbr_fd(int n, int fd) : print a number via a given file descriptor.  

## <span style="color: peru">STRINGS

size_t				ft_strlen(const char *s);  
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize):  
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize):  
int					ft_strncmp(const char *s1, const char *s2, size_t n):  
char				*ft_strchr(const char *s, int c):  
char				*ft_strrchr(const char *s, int c):  
char				*ft_strdup(const char *s1):  
char				*ft_strnstr(const char *haystack, const char *needle,
															size_t len):  
char				*ft_substr(const char *s, unsigned int start, size_t len):  
char				*ft_strjoin(char const *s1, const char *s2):  
char				*ft_strtrim(char const *s1, const char *set):  
char				**ft_split(char const *s, char c):  
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char)):  

## <span style="color: peru">CONVERSIONS

int					ft_atoi(const char *str):  
char				*ft_itoa(int n):  

## <span style="color: peru">CHARACTERS

int					ft_tolower(int c):  
int					ft_toupper(int c):  

## <span style="color: peru">MEMORY

int					ft_memcmp(const void *s1, const void *s2, size_t n):  
void				*ft_memset(void *b, int c, size_t len):  
void				*ft_memcpy(void *dst, const void *src, size_t n):  
void				*ft_memccpy(void *dst, const void *src, int c, size_t n):  
void				*ft_memmove(void *dst, const void *src, size_t len):  
void				*ft_memchr(const void *s, int c, size_t n):  
void				*ft_calloc(size_t count, size_t size):  
void				ft_bzero(void *s, size_t n):  

## <span style="color: peru">LISTS

		typedef struct		s_list  
		{  
			void			*content;  
			struct s_list	*next;  
		}					t_list;  

t_list				*ft_lstlast(t_list *lst):  
t_list				*ft_lstnew(void *content):  
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
										void (*del)(void *)):  
int					ft_lstsize(t_list *lst):  
void				ft_lstadd_front(t_list **alst, t_list *nelem):  
void				ft_lstadd_back(t_list **alst, t_list *nelem):  
void				ft_lstdelone(t_list *lst, void (*del)(void *)):  
void				ft_lstclear(t_list **lst, void (*del)(void *)):  
void				ft_lstiter(t_list *lst, void (*f)(void *)):  

## <span style="color: peru">MATHS

unsigned long long	absolute_llvalue(long long number):  
int 				min(int a, int b, int c):  
int					ft_pgcd(int a, int b):  