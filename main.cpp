#include "tipo_aluno.h"

using namespace std;

int main(int argc, char const *argv[]) {

    tipo_aluno aluno;

    aluno.setNome("gustavo");
    aluno.setTelefone("32906102");
    aluno.setNota(0, 10);
    aluno.setNota(1, 8);
    cout << "Nome: " << aluno.getNome() << "\n" <<
            "Telefone: " << aluno.getTelefone() << "\n" <<
            "Média: " << (aluno.getNota(0)+aluno.getNota(1))/2 << endl;
    
    return 0;
}
