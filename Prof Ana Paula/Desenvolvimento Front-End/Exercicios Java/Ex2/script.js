function validar(){
    const nome = document.getElementById("nome").value;
    const senha = document.getElementById("senha").value;

    document.getElementById("senha_invalido").innerHTML = ""
    document.getElementById("nome_invalido").innerHTML = ""

    document.getElementById("senha_valido").innerHTML = ""
    document.getElementById("nome_valido").innerHTML = ""

    if(nome == ""){
        document.getElementById("nome_invalido").innerHTML = "Não pode prosseguir, sem digitar o nome"
    }
    else{
        document.getElementById("nome_valido").innerHTML = "Campo preenchido com sucesso"
    }

    if (senha == ""){
        document.getElementById("senha_invalido").innerHTML = "Não pode prosseguir, sem digitar a senha"
    }
    else{
        document.getElementById("senha_valido").innerHTML = "Campo preenchido com sucesso"
    }


}