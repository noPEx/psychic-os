all : sig

sig : sig.c
	gcc -o sig sig.c
