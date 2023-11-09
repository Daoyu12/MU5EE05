La commande "env |grep HOME" sert à afficher les variables d’environnements de système.
La commande "echo $PATH" sert à afficher uniquement le contenu de la variable d’environnement PATH.
Créer un bash pour afficher les processus en cours d'exécution: cat > exercice.sh, puis taper "#!/bin/bash" et "ps"
Déplacer le fichier "exercice.sh" dans le répertoire /opt: sudo mv exercice.sh /opt
La commande "export PATH=$PATH:/opt/exercice.sh" nous fait pouvoir exécuter le fichier bash à partir de n'import quel endroit.
Ensuite, nous pouvons fermer votre terminal et relancer le, nous pouvons directement exécuter le fichier par la commande "exercice.sh".
Identifier le fichier script lors du démarrage d’un nouveau terminal: Entrer dans le fichier bashrc par la commande "nano ~/.bashrc" et rajoute "export PATH=$PATH:/opt/exercice.sh" une fois encore et enfin sauvegarder.
Tester en relançant à nouveau le script à partir de votre répertoire $HOME. ça marche.
Pour copier les deux fichiers nous avons rédigé et changé, faites les commandes respectivement "cp ~/.bashrc /home/daoyu/Desktop/MU5EE05/partie_1/lab7/.bashrc" et "cp /opt/exercice.sh /home/daoyu/Desktop/MU5EE05/partie_1/lab7/exercice.sh".