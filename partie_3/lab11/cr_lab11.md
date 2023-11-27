make:"gcc -Wall -c max.c" ; "gcc -Wall -c min.c" ; "gcc -Wall -c var.c" ; "gcc -Wall -c -o testall.o testall.c" ; et "gcc -Wall -o my-binaire max.o min.o var.o testall.o" vont nous créer les fichiers binaires.
make install: "cp my-binaire /home/daoyu" pour installer le programme à home.
make min.o: "make: 'min.o' is up to date.”, il affiche min.o a déja mis à jour.
make clean: "rm -f max.o min.o var.o testall.o my-binaire" pour supprimer tous les fichiers binaires.
ajouter "CC_OPTIONS = vide pour le moment
Ajoutez "CC_OPTIONS = -g -Wall", donc on peut les remplace par "$(CC_OPTIONS)".
Ajoutez "^@" pour remplacer nom de cible "testall", "$<" pour remplacer "max.c min.c var.c". "$^ " pour remplacer "ax.o min.o var.o testall.o".
Modifiez "CC_OPTIONS" en deux modes. Si Debug = yes, en mode "-g -Wall". Si Debug = no, en mode release.
Ajoutez "@echo "mode: $(MODE)" et on a deux mode = Debug et mode = release.
