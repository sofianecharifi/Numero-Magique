# 🎲 Jeu du Nombre Magique

Bienvenue dans le **Jeu du Nombre Magique** ! Un jeu en ligne de commande classique écrit en C où vous devez deviner un nombre aléatoire avec un nombre limité de tentatives.

## 📝 Description

Le programme génère un nombre aléatoire entre **1 et 100**. Votre objectif est de le trouver en **10 tentatives** maximum. À chaque essai, le jeu vous donnera des indices pour vous guider :
* "C'est plus !" (si le nombre mystère est plus grand)
* "C'est moins !" (si le nombre mystère est plus petit)

## ✨ Fonctionnalités

* **Génération aléatoire :** Un nouveau nombre est généré à chaque nouvelle partie.
* **Système de tentatives :** Vous avez 10 essais pour réussir.
* **Gestion d'erreurs :** Le programme gère les entrées invalides (lettres ou symboles) pour éviter les plantages.
* **Rejouabilité :** Possibilité de relancer une partie immédiatement après la fin du jeu.

## 🚀 Installation et Lancement

### Prérequis
Vous devez avoir un compilateur C installé sur votre machine (comme `gcc`).

### Compilation
Ouvrez votre terminal dans le dossier du projet et compilez le fichier `main.c` avec la commande suivante :

```bash
gcc main.c -o nombre_magique
