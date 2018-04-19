OBJ = main.o menu.o triangle.o circle.o screen.o rectangle.o square.o horizontal_line.o intersecting_lines.o
APPNAME = figures.a
TAR = figgures.tar

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lm
	
%.o : %.c
	gcc -c -o $@ $<
	
clean:
	rm $(OBJ) $(APPNAME)
archive:
	tar cf $(TAR) *
