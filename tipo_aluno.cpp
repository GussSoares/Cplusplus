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

void tipo_aluno::matricular(vector<int> matriculados, tipo_aluno aluno){

    //cout << matriculados.size() << '\n';
    for (int i = 0; i < matriculados.size(); i++) {
        if(aluno.getMatricula() == matriculados[i]){
            cout << "Aluno já está matriculado com o seguinte numero de matricula" << aluno.getMatricula() << '\n';
            return;
        }
    }
    matriculados.push_back(5);
    cout << "Matriculado" << '\n';
}

void tipo_aluno::info_aluno(tipo_aluno aluno){
    cout << "Nome: " << aluno.getNome() << "\n" <<
            "Telefone: " << aluno.getTelefone() << "\n" <<
            "Matricula: " << aluno.getMatricula() << "\n" <<
            "Média: " << (aluno.getNota(0)+aluno.getNota(1))/2 << endl;
}
