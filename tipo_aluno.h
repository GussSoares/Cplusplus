#ifndef TIPO_ALUNO_H
#define TIPO_ALUNO_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
//#include "colegio.h"

using namespace std;

class tipo_aluno{

private:
    /* data */
    vector<int> matriculados;
    string nome;
    string telefone;
    string matricula;
    double notas[3];

public:

    void setNome(string nome);
    string getNome();
    void setTelefone(string telefone);
    string getTelefone();
    void setMatricula(string matricula);
    string getMatricula();
    void setNota(int index, double nota);
    double getNota(int index);
    void matricular(vector<int> matriculados, tipo_aluno aluno);
    void info_aluno(tipo_aluno aluno);
};

#endif
