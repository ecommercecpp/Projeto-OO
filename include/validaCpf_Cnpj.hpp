#ifndef _VALIDACPF_CNPJ_HPP_
#define _vALIDACPF_CNPJ_HPP_

#include <string>

class ValidarCpf_Cnpj
{	
	public:
		ValidarCpf_Cnpj();
		bool verificaQual(std::string cpf_cnpj);
};

#endif