CC=emcc
CFLAGS=-Iexternal/include

all:
		#!! $(CC) main.c -o doublefann.js $(CFLAGS)
		#!! $(CC) main.c -o doublefann.min.js -O2 --memory-init-file 0 $(CFLAGS)
		#!! $(CC) main.c -o doublefann.js $(CFLAGS) && printf "\nModule.FS=FS;\n" >> doublefann.js
		#!! $(CC) main.c -o doublefann.min.js -O2 --memory-init-file 0 $(CFLAGS) && printf "\nModule.FS=FS;\n" >> doublefann.min.js
		$(CC) main.c -o fann.js $(CFLAGS)
