CC		= gcc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

NAME 	= libft.a

BONUS	= ft_lstadd_back.c   ft_lstlast.c \
ft_lstadd_front.c  ft_lstmap.c \
ft_lstclear.c      ft_lstnew.c \
ft_lstdelone.c     ft_lstsize.c \
ft_lstiter.c  
BONUS_O	= $(BONUS:.c=.o)

SRCS	= ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlen.c \
ft_bzero.c   ft_isprint.c ft_memset.c  ft_strncmp.c \
ft_calloc.c  ft_memccpy.c ft_strchr.c  ft_strnstr.c \
ft_isalnum.c ft_memchr.c  ft_strdup.c  ft_strrchr.c \
ft_isalpha.c ft_memcmp.c  ft_strlcat.c ft_tolower.c \
ft_isascii.c ft_memcpy.c  ft_strlcpy.c ft_toupper.c \
ft_itoa.c       ft_putstr_fd.c  ft_strtrim.c \
ft_putchar_fd.c ft_split.c      ft_substr.c \
ft_putendl_fd.c ft_strjoin.c ft_putnbr_fd.c \
ft_strmapi.c
OBJ		= $(SRCS:.c=.o)

.c.o:
		@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJ)
				ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(BONUS_O) 

fclean:		clean
			@$(RM) $(NAME)

re:			fclean $(NAME)

bonus:		$(OBJ) $(BONUS_O)
				ar rcs $(NAME) $(OBJ) $(BONUS_O)

leaks:		CC = $(HOME)/.brew/opt/llvm/bin/clang
leaks:		FLAGS += -mlinker-version=450 -fsanitize=address -g
leaks:		fclean $(NAME)
				ASAN_OPTIONS=detect_leaks=1
.PHONY:		all clean fclean re bonus leaks