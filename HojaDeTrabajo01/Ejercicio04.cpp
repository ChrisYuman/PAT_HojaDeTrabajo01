#include "Ejercicio04.h"

void generateParentheses(vector<string>& resultado, string aa, int abrirparen, int cerrarparen, int maximo) {
    if (aa.length() == maximo * 2) {
        resultado.push_back(aa);
        return;
    }

    if (abrirparen < maximo) {
        generateParentheses(resultado, aa + "(", abrirparen + 1, cerrarparen, maximo);
    }

    if (cerrarparen < abrirparen) {
        generateParentheses(resultado, aa + ")", abrirparen, cerrarparen + 1, maximo);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> resultado;
    generateParentheses(resultado, "", 0, 0, n);
    return resultado;
}
