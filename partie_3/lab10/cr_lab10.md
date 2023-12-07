"gcc -c -fPIC max.c -o max.o" -fPIC pour indiquer à GCC de générer du code indépendant de la position, adapté à une utilisation dans des bibliothèques partagées.
"gcc -shared -o libdaoyu.so max.o min.o var.o" crée le bibliothèque par le fichier .so.
"gcc testall.c -L/opt/lib -libdaoyu -o testall" compile le fichier testall.c. "-L/opt/lib" est le chemin de fichier .so. 
Il exécute pas le programme. Il affiche "./testall: error while loading shared libraries: libdaoyu.so: cannot open shared object file: No such file or directory", donc il manque le chemin de bibliothèque. 
"echo $LD_LIBRARY_PATH" pour afficher le contenu de cette variable d'environement.(il affiche rien). “LD_LIBRARY_PATH” est une variable d'environnement utilisée pour spécifier les répertoires dans lesquels le chargeur dynamique doit rechercher les bibliothèques partagées pendant l'exécution. 
"export LD_LIBRARY_PATH=/opt/lib:$LD_LIBRARY_PATH" pour mettre à jour le chemin de bibliothèque.
"gcc testall.c -L/opt/lib -ldaoyu -o testall" complie le testall.c. "./testall" pour exécuter le programme. Il fonctionne bien.
“ldd testall” pour vérifier quelles bibliothèques dynamiques sont utilisées par votre exécutable. Il affiche "libdaoyu.so => /opt/lib/libdaoyu.so".
"sudo find / -type f -name "libm.so.6" 2>/dev/null" pour chercher le chemin de lib math. Il affiche "/usr/lib/x86_64-linux-gnu/libm.so.6".
"readelf -d /usr/lib/x86_64-linux-gnu/libm.so.6 | grep SONAME" sert à identifier le soname, il affiche "0x000000000000000e (SONAME) Library soname: [libm.so.6]"
"sudo cp /home/daoyu/Desktop/MU5EE05/partie_3/lab10/libdaoyu.so /usr/lib/x86_64-linux-gnu/" copie le fichier .so dans un emplacement standard. "sudo chmod 444 /usr/lib/x86_64-linux-gnu/libdaoyu.so" pour donner le droit.
"sudo ldconfig" pour mettez à jour le chargeur la cache du ld.so.
"sudo ldconfig -p | grep libdaoyu" pour vérifier que mon bibliotèque est bien reconnu par votre système. Il affiche "libdaoyu.so (libc6,x86-64) => /lib x86_64-linux-gnu/libdaoyu.so". Il bien connait mon bibliotèque.
"unset LD_LIBRARY_PATH" pour désactiver la variable d’environnement LD_LIBRARY_PATH.
"gcc -o testall2 testall.c -ldaoyu" compile le main en indiquant uniquement le nom de la bibliothèque via l’option –l et sans avoir à indiquer son chemin d’accès. 
Tester avec la commande "./testall2" .  



