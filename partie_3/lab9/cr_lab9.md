"gcc -c max.c -o max.o" crée le fichier .o. 
"ar r liboutils.a max.o min.o" créer un bibliothèque qui s'appelle liboutils.a. 
"ar t liboutils.a" affiche les fichier dans le bibliothèque liboutils.a.
"ranlib liboutils.a" sert à mettre à jour le bibliothèque liboutils.
"gcc testall.c -o testall -L. -loutils" pour créer et démarrer testall.c utilisant la bibliothèque.
"sudo copy /home/daoyu/Desktop/MU5EE05/partie_3/lab9/max.h opt/include" copie le fichier max.h dans le répertoire include
"gcc testall.c -I/opt/include -L/opt/lib -loutils -o testall" sert à créer un fichier testall et déclarer le chemin de fichier dans les répertoires include et lib. 
./testall pour exécuter le fichier testall
"gcc testall.c -I/opt/include -L/opt/lib -loutils -o testall -lm" rajoute le bibliothèque math dans dans le programme.
"cp -r /opt /home/daoyu/Desktop/MU5EE05/partie_3/lab9" copie tous les fichiers de opt dans le lab9.
