#include "tipo_aluno.h"

using namespace std;

int main(int argc, char const *argv[]) {

    tipo_aluno aluno;
    vector<int> v;
    aluno.setNome("gustavo");
    aluno.setTelefone("32906102");
    aluno.setMatricula("123");
    aluno.setNota(0, 10);
    aluno.setNota(1, 8);

    aluno.info_aluno(aluno);

    cout << v.size() << endl;

    //cout << v[0];
    return 0;
}
