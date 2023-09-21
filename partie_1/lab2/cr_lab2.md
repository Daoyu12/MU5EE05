lancer le terminal
git config --global user.name "daoyu"     git config --global user.email daoyu.yao@etu.sorbonne-universite.fr
mkdir test
cat > daoyu.txt, puis taper "hello M2 syscom"
git init
git status
git add daoyu.txt
git status
#message: n branch master Your branch is up to date with ....
git commit -m "message"
#message: 1 file changed, 1 insertion(+), 1 deletion(-) ;  Si il y a deux fichiers dans le répertoire, l'un est modifié.
Créer un compte GitHub pour communiquer avec la machine locale
git remote add origin https://github.com/Daoyu12/TP-temps-reel.git        git push -u origin master
git config credential.helper store         pour mémoriser le username et le mot de passe
Dans le fichier README.md, mettre un commentaire quelconque
git pull origin master       pour télécharger le ficher de GitHub
git clone https://github.com/Daoyu12/TP-temps-reel
