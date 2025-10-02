function MudarTema(){

    let body = document.body;
    let btn = document.querySelector("button");


    if(body.classList.contains("claro")){
        body.classList.remove("claro");
        body.classList.add("escuro");
        btn.textContent = "MODO ESCURO"

    }
    else{
        body.classList.remove("escuro")
        body.classList.add("claro")
        btn.textContent = "MODO CLARO"
    }
}