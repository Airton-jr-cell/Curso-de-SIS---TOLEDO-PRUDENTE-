 function mostrarErro(){
            let input = document.getElementById("texto");
            let msg = document.getElementById("mensagem");

            if (input.value.trim() === "") {
                input.classList.add("erro");
                msg.textContent = "Erro: o campo não pode ficar vazio!";
            } else {
                input.classList.remove("erro");
                msg.textContent = "";
            }
        }