#include <config.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    printf("%s - Gerenciador de páginas web e poderes embarcados.\n" \
            "Para saber mais, acesse '%s'\n", PACKAGE_STRING, PACKAGE_URL);
    return 0;
}
