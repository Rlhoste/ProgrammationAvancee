# Programmation Avancée - TP  
Par Lhoste Rémi (`remi.lhoste@o2game.com`, `remi.lhoste@doctorant.uca.fr`)  

À destination des étudiants de 3ᵉ année de BUT Informatique au Puy-en-Velay.

## Présentation du TP

Ces six travaux pratiques ont pour objectif commun de segmenter le fond d’une image de la manière la plus efficace possible.

L’objectif global est de maîtriser le développement en C++ tout en approfondissant les compétences en algorithmique. Vous serez amenés à implémenter différentes techniques classiques de traitement d’image, telles que le seuillage, les opérateurs morphologiques, RANSAC, le region growing ou encore l’IoU.

## Compétences visées

- Maîtrise avancée du C++ : utilisation des classes, fonctions, fonctions lambda, conversions de types et pointeurs.  
- Compétences en algorithmique : gestion des indices, décomposition d’un problème en sous-problèmes, gestion de la mémoire.  
- Compréhension des différentes familles d’algorithmes : non déterministes, linéaires, bio-inspirés, topologiques et itératifs.  
- Compréhension des algorithmes de traitement de données structurées.  
- Initiation au développement en CUDA et à l’interopérabilité entre Python, C++ et CUDA.  

## Ressources externes optionnelles
### Ouvrir les images
Pour visualiser les images de profondeur ou les masques, expérimenter avec les filtres, vous pouvez utiliser ImageJ :

https://imagej.net/ij/

### Auto-annotator

https://github.com/bnsreenu/digitalsreeni-image-annotator

```bash
pip install digitalsreeni-image-annotator
digitalsreeni-image-annotator
```

## Conseils
- Les fichiers de profondeur `.tiff` du dossier `data` peuvent être inspectés dans ImageJ pour mieux comprendre les valeurs et le contraste.

## Conditions d'utilisation du jeu de données
Le jeu de données fourni avec ce TP est mis à disposition uniquement dans le cadre pédagogique de cet enseignement de Programmation Avancée.

Il ne peut être utilisé, copié, diffusé, partagé, publié ou réutilisé en dehors de ce cadre sans autorisation explicite préalable.
