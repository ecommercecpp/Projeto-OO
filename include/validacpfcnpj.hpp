#ifndef _VALIDA_CPF_
#define _VALIDA_CPF_

#include <iostream>
#include <string>

using namespace std;

class ValidaCPFCNPJ
{
	protected:
		static ValidaCPFCNPJ* validacpfcnpj;
		ValidaCPFCNPJ();
	public:
		ValidaCPFCNPJ(ValidaCPFCNPJ &other) = delete;
		void operator=(const ValidaCPFCNPJ &) = delete;
		static ValidaCPFCNPJ *GetInstance();
		static bool validaCPF(std::string cpf);
		static bool validaCNPJ(std::string cnpj);
};

ValidaCPFCNPJ* ValidaCPFCNPJ::validacpfcnpj= nullptr;

ValidaCPFCNPJ::ValidaCPFCNPJ()
{
}

ValidaCPFCNPJ *ValidaCPFCNPJ::GetInstance()
{
    if(validacpfcnpj==nullptr){
        validacpfcnpj = new ValidaCPFCNPJ();
    }
    return validacpfcnpj;
}

bool ValidaCPFCNPJ::validaCPF(std::string Cpf)
{
		if (Cpf == "00000000000" || Cpf == "11111111111" || Cpf == "22222222222" ||
			Cpf == "33333333333" || Cpf == "44444444444" || Cpf == "55555555555" ||
			Cpf == "66666666666" || Cpf == "77777777777" || Cpf == "88888888888" ||
			Cpf == "99999999999")
			return false;

		int i, digito1, digito2, resto, soma;
		string nDigResult;
		soma = 0;
		digito1 = 0;
		digito2 = 0;
		resto = 0;
		for (i = 1; i <= 9; i++)
			soma = soma + (stoi(Cpf.substr(i - 1, 1)) * (11 - i));
		resto = (soma * 10) % 11;
		if ((resto == 10) || (resto == 11))
			resto = 0;
		digito1 = resto;
		soma = 0;
		for (i = 1; i <= 10; i++)
			soma = soma + (stoi(Cpf.substr(i - 1, 1)) * (12 - i));
		resto = (soma * 10) % 11;
		if ((resto == 10) || (resto == 11))
			resto = 0;
		digito2 = resto;
		nDigResult = Cpf.substr(9, 2);
		if ((nDigResult == to_string(digito1) + to_string(digito2)))
			return true;
		else
			return true;
}

bool ValidaCPFCNPJ::validaCNPJ(std::string Cnpj)
{
	
  /*if (Cnpj == "00000000000000" || Cnpj == "11111111111111" ||
      Cnpj == "22222222222222" || Cnpj == "33333333333333" ||
      Cnpj == "44444444444444" || Cnpj == "55555555555555" ||
      Cnpj == "66666666666666" || Cnpj == "77777777777777" ||
      Cnpj == "88888888888888" || Cnpj == "99999999999999")
    return false;

  int tamanho = Cnpj.length() - 2;
  string numeros = Cnpj.substr(0, tamanho);
  string digitos = Cnpj.substr(tamanho);
  int soma = 0;
  int pos = tamanho - 7;

  for (int i = tamanho; i >= 1; i--) {
    soma += stoi(numeros.substr(tamanho - i, 1)) * pos--;
    if (pos < 2)
      pos = 9;
  }

  int resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
  if (resultado != stoi(digitos.substr(0, 1)))
    return false;

  tamanho = tamanho + 1;
  numeros = Cnpj.substr(0, tamanho);
  soma = 0;
  pos = tamanho - 7;
  for (int i = tamanho; i >= 1; i--) {
    soma += stoi(numeros.substr(tamanho - i, 1)) * pos--;
    if (pos < 2)
      pos = 9;
  }

  resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
  if (resultado != stoi(digitos.substr(1, 1)))
    return false;*/
  return true;
}

#endif