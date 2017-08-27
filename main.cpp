#include "tipo_aluno.h"

using namespace std;

int main(int argc, char const *argv[]) {

    tipo_aluno aluno;
    vector<tipo_aluno> v;
    aluno.setNome("gustavo");
    aluno.setTelefone("32906102");
    aluno.setMatricula("123");
    aluno.setNota(0, 10);
    aluno.setNota(1, 8);
    cout << "Nome: " << aluno.getNome() << "\n" <<
            "Telefone: " << aluno.getTelefone() << "\n" <<
            "Matricula: " << aluno.getMatricula() << "\n" <<
            "Média: " << (aluno.getNota(0)+aluno.getNota(1))/2 << endl;
    aluno.matricular(v, aluno);

    cout << v.size();
    return 0;
}
