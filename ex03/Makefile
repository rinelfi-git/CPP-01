NAME = violence
CPPC = c++
CPPARG = -Wall -Wextra -Werror -std=c++98
SRCs = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
OBJs = $(SRCs:.cpp=.o)

$(NAME): $(OBJs)
	$(CPPC) $(CPPARG) $(OBJs) -o $@

%.o: %.cpp
	$(CPPC) $(CPPARG) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(NAME)

re: fclean all
