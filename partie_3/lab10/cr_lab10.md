"gcc -c -fPIC max.c -o max.o" -fPIC pour indiquer à GCC de générer du code indépendant de la position, adapté à une utilisation dans des bibliothèques partagées.
"gcc -shared -o libdaoyu.so max.o min.o var.o" crée le bibliothèque par le fichier .so.
"gcc testall.c -L/opt/lib -libdaoyu -o testall" compile le fichier testall.c. "-L/opt/lib" est le chemin de fichier .so. 
