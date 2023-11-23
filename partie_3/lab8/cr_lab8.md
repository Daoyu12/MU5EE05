La commande "gcc -g -o testmax max.c testmax.c" sert à assembler les 3 fichiers en c et h en un suel fichier et ensuite nous pouvons l'exécuter par la commande "./testmax".
Utiliser les options -E, -S et -c pour générer les fichiers de compilations intermédiaires: gcc -E testmax.c -o testmax.i, gcc -S testmax.c -o testmax.s, gcc -S testmax.c -o testmax.s.
L'option -E effectue uniquement la précompilation,avec l'extension .i. L'option -S est utilisée pour générer des fichiers source en langage d'assemblage , avec l'extension .s, cela signifie qu'elle compile le code C en code assembleur, mais elle ne génère pas de fichiers objet ni de fichiers exécutables. L'option -c est utilisée pour compiler un fichier source C en un fichier objet,avec l'extension .o.
La fonction maxim sera remplacé par le binaire correspondant dès que les fichiers objets sont liés ensemble.


