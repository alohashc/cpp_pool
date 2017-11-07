NAME = ft_retro
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

#------ path -------
FILES_PATH		= .
OBJECTS_PATH	= ./objects

#------ files ------
FILES_FILES		= Enemy Bullet Player Window Stars main

#------ other ------
FILES_OBJ 		= $(addprefix $(OBJECTS_PATH)/, $(addsuffix .o, $(FILES_FILES)))


#------ make ------
all: $(NAME)

$(NAME): $(FILES_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lncurses

$(OBJECTS_PATH)/%.o: $(FILES_PATH)/%.cpp
	@mkdir $(OBJECTS_PATH) 2> /dev/null || true
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(FILES_OBJ)
	rm -rf $(OBJECTS_PATH)

fclean:
	rm -f $(NAME)
	rm -f $(FILES_OBJ)
	rm -rf $(OBJECTS_PATH)

re: fclean all
