#include "tipo_aluno.h"

using namespace std;

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

void tipo_aluno::matricular(vector<tipo_aluno> matriculados, tipo_aluno aluno){

    for (int i = 0; i < matriculados.size(); i++) {
        if(aluno.getMatricula() == "123"){
            cout << "teste" << '\n';
        }
    }
    //matriculados.insert(aluno);
    cout << "Matriculado" << '\n';
}
