# Compilateur
CC = gcc

# Nom de l'exécutable
TARGET = pagerank

# Cible par défaut : compilation de l'exécutable
all: $(TARGET)

$(TARGET): Genc_PageRank.c
	$(CC) -o $(TARGET) Genc_PageRank.c -lm 

# Execution du fichier executable
run: $(TARGET)
	./$(TARGET)

# Nettoyage des fichiers générés
clean:
	rm -f $(TARGET)

# Marquer les cibles comme phony pour éviter les conflits avec des fichiers de même nom
.PHONY: all clean
