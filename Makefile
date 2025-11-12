.SILENT :
NAME = libft.a

SRC = 		ft_toupper.c \
			ft_tolower.c \
			\
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			\
			ft_memset.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memchr.c \
			\
			ft_isdigit.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_isalpha.c \
			ft_isalnum.c \
			\
			ft_bzero.c \
			ft_atoi.c \
			ft_calloc.c \
			\
			ft_split.c \
			ft_itoa.c \
			\
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

SRC_BONUS =	ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstdelone.c \
			ft_lstnew.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
		

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=$(OBJ_DIR)/%.o)
OBJ_DIR = Obj
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
AR = ar -rcs #manipule des archives

#regle par defaut
all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o:%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

bonus : $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

test :
	make && $(CC) $(CFLAGS) main.c libft.a && ./a.out
	
#nettoyage des fichiers objets
clean :
	rm -rf $(OBJ_DIR) $(OBJ_BONUS)

#nettoyage complet (fichiers objets et executables)
fclean : clean
	rm -f $(NAME) 

#refaire la compilation
re: fclean all

#s'assure qu'il cherche les comm du makefile
.PHONY : all clean fclean re bonus test