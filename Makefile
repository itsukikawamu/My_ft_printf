# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 13:17:32 by ikawamuk          #+#    #+#              #
#    Updated: 2025/05/15 23:24:44 by ikawamuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

SRCFILES := convert_specifier.c\
			ft_printf.c\
			get_format_spec.c\
			ltox.c\
			output.c\
			pad_char.c\
			pop_arg.c\
			print_arg.c\
			print_char.c\
			print_dec.c\
			print_hex.c\
			print_percent.c\
			print_ptr.c\
			print_str.c\
			print_u_int.c\
			ptox.c\
			set_ctx_utils.c

CC := cc
CFLAGS=-Wall -Wextra -Werror $(addprefix -I,$(INCLUDES))
AR := ar
ARFLAGS := rcs
RM := rm -f
RMDIR := rm -rf

SRCDIR := src
OBJDIR := obj
INCDIR := include
LIBFTDIR := libft
TMPDIR := ar_tmp

SRCS := $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJS := $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
INCLUDES := $(INCDIR) $(LIBFTDIR)/include

LIBFT := $(LIBFTDIR)/libft.a

VALGRIND = valgrind
VALGRIND_FLAGS = --leak-check=full

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(LIBFT) $(OBJS)
	mkdir -p $(TMPDIR)
	cp $(LIBFT) $(TMPDIR)
	cd $(TMPDIR) && $(AR) x ../$(LIBFT)
	$(AR) $(ARFLAGS) $@ $(OBJS) $(TMPDIR)/*.o
	$(RMDIR) $(TMPDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY:all clean fclean re test bonus

clean:
	$(MAKE) -C $(LIBFTDIR) clean	
	@$(RMDIR) $(OBJDIR)

fclean: clean
	$(MAKE) -C $(LIBFTDIR) fclean
	$(RM) $(NAME)

re: fclean all

bonus: all

test: all
	@\$(CC) test.c $(NAME) $(LIBFT) -o test
# $(VALGRIND) $(VALGRIND_FLAGS) 
	./test
