/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 09:02:41 by majullie          #+#    #+#             */
/*   Updated: 2016/12/06 08:57:56 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_llist
{
	size_t			size;
	struct s_llnode *first;
	struct s_llnode *last;
}					t_llist;

typedef struct		s_llnode
{
	void			*val;
	size_t			val_size;
	struct s_llnode *next;
}					t_llnode;

typedef enum		e_bool
{
	FALSE,
	TRUE
}					t_bool;

int					ft_atoi(const char *str);
char				*ft_itoa(int n);

/*
** character functions
*/
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** 42 list functions
*/
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

/*
** memory functions
*/
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

/*
**	print functions
*/
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);

void				*ft_realloc(void *ptr, size_t old, size_t size);

/*
** strings functions
*/
void				ft_stradd(char **s1, char const *s2);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
void				ft_strredux(char **s, unsigned int start, size_t len);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);

/*
**	simple linked list functions
*/
void				ft_llist_create(t_llist **list);
t_llnode			*ft_llist_create_node(const void *val, size_t val_size);
void				ft_llist_add_first(t_llist *list, const void *val,
		size_t val_size);
int					ft_llist_add_nodup(t_llist *list, void *val,
		size_t val_size, int (*cmp)());
void				ft_llist_rm_first(t_llist *list);
void				ft_llist_add_last(t_llist *list, const void *val,
		size_t val_size);
void				ft_llist_rm_last(t_llist *list);
void				ft_llist_destroy_node(t_llnode **node);
void				ft_llist_destroy(t_llist **list);
int					ft_llist_contains(t_llist *list, const void *val,
		int (*cmp)());
int					ft_llist_indexof(t_llist *list, const void *val,
		int (*cmp)());
int					ft_llist_last_indexof(t_llist *list, const void *val,
		int (*cmp)());
t_llist				*ft_llist_copy(t_llist *list);
void				ft_llist_merge(t_llist *list1, t_llist *list2);
int					ft_llist_add_at(t_llist *list, void *val, size_t val_size,
		unsigned int index);
t_llnode			*ft_llist_get_at(t_llist *list, unsigned int index);
void				ft_llist_rm_at(t_llist *list, unsigned int index);
void				ft_llist_set_at(t_llist *list, void *val, size_t val_size,
		unsigned int index);
void				ft_llist_foreach(t_llist *list, void (*f)(void *));
void				ft_llist_inverse(t_llist *list);
t_llist				*ft_llist_map(t_llist *list, t_llnode *(*f)(t_llnode *));
void				ft_llist_sort(t_llist *list, int (*cmp)());
void				ft_llist_sorted_insert(t_llist *list, void *val,
		size_t val_size, int (*cmp)());
void				ft_llist_sorted_merge(t_llist *list1, t_llist *list2,
		int (*cmp)());
void				**ft_llist_to_array(t_llist *list);
t_llist				*ft_llist_to_set(t_llist *list, int (*cmp)());
t_llist				*ft_array_to_llist(void *array, size_t size,
		size_t val_size);

/*
** Fonctions mathematiques
*/

int					ft_min(int x, int y);
float				ft_fmin(float x, float y);
double				ft_dmin(double x, double y);
int					ft_max(int x, int y);
float				ft_fmax(float x, float y);
double				ft_dmax(double x, double y);
#endif
