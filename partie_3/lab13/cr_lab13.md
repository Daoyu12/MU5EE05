Pour voir cet appareil apparaître en regardant la sortie de la commande dmesg
"crw-rw---- 1 root dialout 188, 0 déc.   7 10:16 /dev/ttyUSB0" affiche que un accès en lecture et en écriture à ce prériphérique.
"sudo adduser daoyu dialout" pour ajouter l'utilisateur au groupe
Commande "reboot" pour redémarrer complètement le système. Vérifier avec la command "cat /etc/group" que l'utilisateur "daoyu:x:1000:" est dans le dialout.
"picocom -b 115200 /dev/ttyUSB0" pour démarrer la communication série sur /dev/ttyUSB0
"sudo raspi-config" pour vérifier que y arriver et y accéder au menu de configuration des interfaces d’entrées/sortie de la carte.
"sudo apt install net-tools" pour installer l'outil net-tools. Et ensuite nous pouvons lancer la commande ifconfig pour identifier si votre OS arrive à détecter ou pas la nouvelle interface.
"sudo /etc/init.d/networking restart" pour "Restarting networking (via systemctl): networking.service."

