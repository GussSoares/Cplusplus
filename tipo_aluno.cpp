#include "tipo_aluno.h"

void tipo_aluno::setNome(string nome){
    this->nome = nome;
}

string tipo_aluno::getNome(){
    return this->nome;
}

void tipo_aluno::setMatricula(string matricula){
    this->matricula = matricula;
}

string tipo_aluno::getMatricula(){
    return this->matricula;
}

void tipo_aluno::setTelefone(string telefone){
    this->telefone = telefone;
}

string tipo_aluno::getTelefone(){
    return this->telefone;
}

void tipo_aluno::setNota(int index, double nota){
    this->notas[index] = nota;
}

double tipo_aluno::getNota(int index){
    return this->notas[index];
}

void tipo_aluno::matricular(tipo_aluno aluno){

    if(aluno.getMatricula())
    cout << "Matriculado" << '\n';
}
