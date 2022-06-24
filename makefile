NAME	=	libft.a

SRCS	=	ft_isalpha.c 				\
			ft_isdigit.c				\
			ft_isalnum.c				\
			ft_atoi.c					\
			ft_isascii.c				\
			ft_isprint.c				\
			ft_strlen.c					\
			ft_isupper.c				\
			ft_islower.c				\
			ft_memset.c					\
			ft_bzero.c					\
			ft_calloc.c					\
			ft_memcpy.c					\
			ft_memmove.c				\
			ft_strlcpy.c				\
			ft_strlcat.c				\
			ft_toupper.c				\
			ft_tolower.c				\
			ft_strchr.c					\
			ft_strrchr.c				\
			ft_strncmp.c				\
			ft_memchr.c					\
			ft_memcmp.c					\
			ft_strnstr.c				\
			ft_atoi.c					\
			ft_strdup.c					\
			ft_substr.c					\
			ft_strjoin.c				\
			ft_strtrim.c				\
			ft_strsplit.c				\
			ft_itoa.c					\
			ft_strmapi.c				\
			ft_striteri.c				\
			ft_putchar_fd.c				\
			ft_putstr_fd.c				\
			ft_putendl_fd.c

SRCB = 		ft_lstsize.c			\
			ft_lstadd_front.c		\
			ft_lstsize.c			\
			ft_lstlast				\
			ft_lstadd_back.			\
			ft_lstdelone.c			\
			ft_lstclear.c			\
			ft_lstiter.c			\
			ft_lstmap.c

CC		=	gcc
FLAGS	=	-c -Wall -Wextra -Werror
LIB		=	ar rc

OBJS	=	$(SRCS:.c=.o)

OBJSB	=	$(SRCB:.c=.o)

$(NAME):
	$(CC) $(FLAGS) $(SRCS)
	$(LIB) $(NAME) $(OBJS)

all: $(NAME)

bonus:  $(CC) $(FLAGS) $(SRCB)
	$(LIB) $(NAME) $(OBJSB)

clean:	
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

bclean: rm -f $(OBJSB) 

re: fclean all
