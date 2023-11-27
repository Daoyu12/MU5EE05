"gcc -Wall -c max.c" ; "gcc -Wall -c min.c" ; "gcc -Wall -c var.c" ; "gcc -Wall -c -o testall.o testall.c" ; et "gcc -Wall -o my-binaire max.o min.o var.o testall.o" vont nous créer les fichiers binaires.
make install: "cp my-binaire /home/daoyu" pour installer le programme à home.
make min.o: "make: “min.o” pour créer le fichier min.o. Il affiche min.o a déja mis à jour.
make clean: "rm -f max.o min.o var.o testall.o my-binaire" pour supprimer tous les fichiers binaires.
ajouter "CC_OPTIONS =".
on ajoute "CC_OPTIONS = -g -Wall", donc on peut les remplace par "$(CC_OPTIONS)".

/home/daoyu/Desktop/MU5EE05/partie_3/lab11